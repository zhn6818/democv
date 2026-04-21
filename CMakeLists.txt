cmake_minimum_required(VERSION 3.15)
project(democv)

set(OPENCV_ROOT "C:/Mac/Home/Documents/windows/opencv/build")

add_subdirectory(src)

add_executable(democv main.cpp)
target_include_directories(democv PRIVATE ${OPENCV_ROOT}/include)
target_link_libraries(democv PRIVATE imgproc
    $<$<CONFIG:Debug>:${OPENCV_ROOT}/x64/vc16/lib/opencv_world490d.lib>
    $<$<CONFIG:Release>:${OPENCV_ROOT}/x64/vc16/lib/opencv_world490.lib>
)

set_target_properties(democv PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG>
)
add_custom_command(TARGET democv POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<$<CONFIG:Debug>:${OPENCV_ROOT}/x64/vc16/bin/opencv_world490d.dll>"
        "$<$<CONFIG:Release>:${OPENCV_ROOT}/x64/vc16/bin/opencv_world490.dll>"
        $<TARGET_FILE_DIR:democv>
)

set_target_properties(imgproc PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG>
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG>
)
