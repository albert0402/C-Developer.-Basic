cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(
	guess_the_number
	guess_the_number.cpp
	src/game.cpp
	src/random_value.cpp
	include/game.h
	include/random_value.h
)

