cmake_minimum_required(VERSION 3.7)
project(TestEncrypto)
 
set(CMAKE_CXX_STANDARD 11)

set(Srcs 
	TestEncrypt.cpp
	)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)

LINK_DIRECTORIES(
		${PROJECT_SOURCE_DIR}/../bin/${CMAKE_BUILD_TYPE}
    )


add_executable(TestEncrypto ${Srcs})

INCLUDE_DIRECTORIES(
	../
    )

add_definitions(
	-D_CONSOLE
	-D_CRT_SECURE_NO_WARNINGS
)

target_link_libraries(TestEncrypto
	Encrypt.lib
) 

