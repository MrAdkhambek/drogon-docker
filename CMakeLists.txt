cmake_minimum_required(VERSION 3.22.1)
project(drogon_docker)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-fcoroutines")
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

#set( OPENSSL_ROOT_DIR "/opt/homebrew/Cellar/openssl@3/3.1.0/")



link_libraries(
        "jsoncpp"
        "drogon"
        "trantor"
        "uuid"
        "ssl"
        "crypto"
        "z"
        "pq"
)

add_executable(drogon_docker main.cpp)


#find_package(Drogon CONFIG REQUIRED)
#message(STATUS "DROGON_CXX_STANDARD ${DROGON_CXX_STANDARD}" )
#target_link_libraries(${PROJECT_NAME} PRIVATE Drogon::Drogon)
