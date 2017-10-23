cmake_minimum_required(VERSION 3.8)
project(natasha)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        lib/libfortuna/blf.c lib/libfortuna/fortuna.c lib/libfortuna/internal.c lib/libfortuna/md5.c lib/libfortuna/px.c
        lib/libfortuna/random.c lib/libfortuna/rijndael.c lib/libfortuna/sha1.c lib/libfortuna/sha2.c
        main.cpp src/basedef.cpp)
add_executable(natasha ${SOURCE_FILES})