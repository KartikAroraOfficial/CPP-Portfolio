cmake_minimum_required(VERSION 3.5)

project(BankingSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(BankingSystem main.cpp account.cpp account.h)
