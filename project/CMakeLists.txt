cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(
	main_calculation

	main_calculation.cpp
	src/calculate_coordinate_yaw.cpp
	src/conjugate.cpp
	src/star_time.cpp
	src/astro.cpp
	src/bins.cpp
	src/read.cpp
	src/write.cpp

	include/calculate_coordinate_yaw.h
	include/conjugate.h
	include/star_time.h
	include/astro.h
	include/bins.h
	include/read.h
	include/write.h
)

