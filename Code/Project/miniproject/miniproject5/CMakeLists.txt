cmake_minimum_required(VERSION 3.10)

project(BTEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(BankSystem
    src/main.cpp
    src/Account.cpp
    src/BankSystem.cpp
    src/Customer.cpp
    src/Transaction.cpp
)
