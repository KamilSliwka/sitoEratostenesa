cmake_minimum_required(VERSION 3.24)
project(sitoEratostenesa)

set(CMAKE_CXX_STANDARD 17)

add_executable(sitoEratostenesa main.cpp cmake-build-debug/PrimeGenerator.cpp cmake-build-debug/PrimeGenerator.h PrimeGenerator.cpp PrimeGenerator.h)
