cmake_minimum_required(VERSION 3.7)
project(Encrypt)
 
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(TestEncrypt)

set(SOURCES
    dllmain.cpp
)
project(Encrypt)
 
set(CMAKE_CXX_STANDARD 11)

set(Srcs 
	dllmain.cpp
	)
SET(HEADER_H
Aes.h
AesEncryptor.h
Common.h
)

SET(SOURCE_CC
Aes.cpp
AesEncryptor.cpp
)


source_group(headers FILES ${HEADER_H})
source_group(src FILES ${SOURCES_CC})


add_library(Encrypto SHARED ${HEADER_H} ${SOURCE_CC})

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


add_definitions(
	-D_CONSOLE
	-D_CRT_SECURE_NO_WARNINGS
)
