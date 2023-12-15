cmake_minimum_required(VERSION 3.27)
project(tactoe)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(tactoe main.cpp
        TicTactoe.cpp
        TicTactoe.h)
target_link_libraries(tactoe
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

