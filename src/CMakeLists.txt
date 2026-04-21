set(OPENCV_ROOT "C:/Mac/Home/Documents/windows/opencv/build")

add_library(imgproc SHARED image_process.cpp)

target_include_directories(imgproc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(imgproc PRIVATE ${OPENCV_ROOT}/include)
target_compile_definitions(imgproc PRIVATE BUILDING_IMGPROC_DLL)

target_link_libraries(imgproc PRIVATE
    $<$<CONFIG:Debug>:${OPENCV_ROOT}/x64/vc16/lib/opencv_world490d.lib>
    $<$<CONFIG:Release>:${OPENCV_ROOT}/x64/vc16/lib/opencv_world490.lib>
)
