

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  ao
  VERSION 1.0
  LANGUAGES CXX)


  file(GLOB SRC
  "src/**/*.cpp"
  "src/*.cpp"
  "include/*.h"
)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

message(STATUS "foo include dir: ${SRC}")
add_library(${PROJECT_NAME} SHARED ${SRC})

set(SDL2_DIR lib/SDL2/cmake)
find_package(SDL2 REQUIRED)


target_include_directories(${PROJECT_NAME} PRIVATE
    include
    ${SDL2_INCLUDE_DIRS}
    # Remember to add the include directories of any other libraries too
)

target_link_libraries(ao ${SDL2_LIBRARIES})
# Install library


install(TARGETS ${PROJECT_NAME} EXPORT aoConfig
    ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})
install(EXPORT aoConfig DESTINATION share/ao/cmake)

export(TARGETS ${PROJECT_NAME} FILE aoConfig.cmake)