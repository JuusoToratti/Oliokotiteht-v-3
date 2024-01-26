cmake_minimum_required(VERSION 3.5)

project(italialainenkokki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(italialainenkokki main.cpp)

include(GNUInstallDirs)
install(TARGETS italialainenkokki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
