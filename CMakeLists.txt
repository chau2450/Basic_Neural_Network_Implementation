set(CMAKE_PREFIX_PATH "/home/ivanbliminse/miniconda3/pkgs/eigen-3.4.0-h4bd325d_0/share/eigen3/cmake" CACHE PATH "Path to Eigen3Config.cmake")

cmake_minimum_required(VERSION 3.24)
project(Neural_Network_Implementation)

set(CMAKE_CXX_STANDARD 17)

# Set the path to Eigen3 library
set(EIGEN3_INCLUDE_DIRS "/usr/include/eigen3")
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

# Add the executable
add_executable(Neural_Network_Implementation main.cpp src/Layer.cpp include/Dense.h src/Dense.cpp)

# Link the Eigen3 library
target_link_libraries(Neural_Network_Implementation Eigen3::Eigen)
