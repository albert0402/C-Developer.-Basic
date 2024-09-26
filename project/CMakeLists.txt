cmake_minimum_required(VERSION 3.10)
project(final_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(
	main

	main.cpp

	calculations/src/AstroInertialModeResultMatrix.cpp
	calculations/src/CoorectionModeResultMatrix.cpp
	calculations/src/Result.cpp
	calculations/src/Service.cpp


	matrixs/src/AstroMatrix.cpp
	matrixs/src/ConjugateMatrix.cpp
	matrixs/src/GeographyMatrix.cpp
	matrixs/src/Matrix.cpp
	matrixs/src/Rotation.cpp
	matrixs/src/TimeMatrix.cpp

	modes/src/AstroInertialMode.cpp
	modes/src/CorrectionMode.cpp
)

