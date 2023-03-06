
cmake_minimum_required(VERSION 3.1...3.25)

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  sandbox
  VERSION 1.0
  LANGUAGES CXX)


  file(GLOB SRC
  "sandbox/src/**/*.cpp"
  "sandbox/src/*.cpp"
)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
configure_file(ao/lib/SDL2/lib/x64/SDL2.dll ${CMAKE_BINARY_DIR} COPYONLY)
message(STATUS "foo include dir: ${SRC}")
# Link each target with other targets or add options, etc.
add_subdirectory(ao)

# Adding something we can run - Output name matches target name
add_executable(${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME} PRIVATE
    ao/include
    include
    # Remember to add the include directories of any other libraries too
)
target_link_libraries(${PROJECT_NAME}
ao
# Add any other libs you want to use here
)
set_target_properties(${PROJECT_NAME} PROPERTIES
CXX_STANDARD 17
CXX_STANDARD_REQUIRED ON
)
