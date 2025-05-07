cmake_minimum_required(VERSION 3.10)
project(CoreEngine)

set(CMAKE_CXX_STANDARD 17) # Or your preferred C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED True)

# For creating a static or dynamic library
# Ensure the source files listed here actually exist in your src/ directory
add_library(CoreEngineSHARED SHARED 
    src/MyCoreFunctions.cpp 
    # Add other C++ source files here as you create them
)

# Include directory
target_include_directories(CoreEngineSHARED PUBLIC  # <-- Corrected target name
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# Properties for the CoreEngineSHARED target
set_target_properties(CoreEngineSHARED PROPERTIES # <-- Corrected target name
    FRAMEWORK TRUE 
    MACOSX_RPATH TRUE
)