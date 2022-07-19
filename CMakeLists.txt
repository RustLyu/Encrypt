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
Base64Encryptor.h
Md5.h
)

SET(SOURCE_CC
Aes.cpp
AesEncryptor.cpp
Base64Encryptor.cpp
Md5.cpp
)


source_group(headers FILES ${HEADER_H})
source_group(src FILES ${SOURCES_CC})


add_library(Encrypt SHARED ${HEADER_H} ${SOURCE_CC})

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


add_definitions(
	-D_CONSOLE
	-D_CRT_SECURE_NO_WARNINGS
)
