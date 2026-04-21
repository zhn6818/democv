cmake_minimum_required(VERSION 3.15)
project(democv)

add_executable(democv main.cpp)

set(OPENCV_ROOT "C:/Mac/Home/Documents/windows/opencv/build")
target_include_directories(democv PRIVATE ${OPENCV_ROOT}/include)
target_link_libraries(democv PRIVATE
    $<$<CONFIG:Debug>:${OPENCV_ROOT}/x64/vc16/lib/opencv_world490d.lib>
)
