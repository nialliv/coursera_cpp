cmake_minimum_required(VERSION 3.18)

project(Coursera)
 
set(SOURCES src/main.cpp src/duration.cpp)
set(HEADERS src/duration.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
set_target_properties(
    ${PROJECT_NAME} PROPERTIES
    CXX_STANDART 17
    CXX_STANDERT_REQUIRED ON
)
target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)
