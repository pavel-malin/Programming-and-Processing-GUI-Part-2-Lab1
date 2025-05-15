cmake_minimum_required(VERSION 3.16)
project(TaskScheduler)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(${PROJECT_NAME}
    main.cpp
    taskscheduler.cpp
    taskscheduler.h
    task.h
)

target_link_libraries(${PROJECT_NAME}
    Qt::Widgets
)
