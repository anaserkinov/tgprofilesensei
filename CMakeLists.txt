cmake_minimum_required(VERSION 3.10)

project(ProfileSensei)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(
    GLOB 
    SOURCE_FILES 
    ${SOURCE_DIR}/Main.cpp
    ${SOURCE_DIR}/DatabaseController.cpp
    ${SOURCE_DIR}/MainDatabase.cpp
    ${SOURCE_DIR}/fragments/*.cpp
    )

add_executable(
    ProfileSensei 
    ${SOURCE_FILES}
    )

add_subdirectory("sqlite_cpp")
add_subdirectory("tgbot_fragment")

include_directories(
    "sqlite_cpp/include"
    "tgbot_fragment/tgbot-cpp/include/tgbot"
    "tgbot_fragment/include"
    "src/include"
)

target_link_libraries(ProfileSensei 
tgbot_fragment
sqlite_cpp
TgBot
)