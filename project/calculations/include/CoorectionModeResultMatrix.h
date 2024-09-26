#pragma once

#include "../../matrixs/include/GeographyMatrix.h"
#include "../../matrixs/include/Rotation.h"
#include "../../matrixs/include/Matrix.h"

#include <iostream>

/************************************/
/*        Матрица коррекции         */
/************************************/

Matrix3x3 CorrectionMode(
                        float Psi,
                        float Phi, float Lambda);