cmake_minimum_required(VERSION 3.16)

project(console_calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(console_calculator main.cpp
    calc.h calc.cpp)

include(GNUInstallDirs)
install(TARGETS console_calculator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
