cmake_minimum_required(VERSION 3.28.3)

PROJECT(MCT)
INCLUDE_DIRECTORIES(
./src/include
)
AUX_SOURCE_DIRECTORY(src ./src)
ADD_EXECUTABLE(${PROJECT_NAME} ./src/main.cpp)

