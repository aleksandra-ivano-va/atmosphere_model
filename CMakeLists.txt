cmake_minimum_required(VERSION 3.12)
project(TEST_ATM LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

# Создаём статические библиотеки
add_library(Atmosphere STATIC
    src/Atmosphere.cpp
    include/Atmosphere.h
)

# Основной исполняемый файл
add_executable(TEST_ATM
    src/main.cpp
)

# Линкуем библиотеки к main
target_link_libraries(TEST_ATM
    PRIVATE Atmosphere
)
