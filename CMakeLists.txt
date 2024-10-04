cmake_minimum_required(VERSION 3.0)

project(SFMLExample)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 REQUIRED COMPONENTS graphics window system audio)

add_executable(main src/main.cpp)

target_link_libraries(main sfml-graphics sfml-window sfml-system sfml-audio)
