cmake_minimum_required(VERSION 3.10)
project(final_project)

set(CMAKE_CXX_STANDARD 17)


add_executable(
	main

	main.cpp

	calculations/AstroInertialModeResultMatrix.cpp
	calculations/CoorectionModeResultMatrix.cpp
	calculations/Result.cpp

	src/AstroMatrix.cpp
	src/ConjugateMatrix.cpp
	src/GeographyMatrix.cpp
	src/Matrix.cpp
	src/Rotation.cpp
	src/TimeMatrix.cpp
)

