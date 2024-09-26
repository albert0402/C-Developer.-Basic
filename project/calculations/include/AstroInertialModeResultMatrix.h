#pragma once

#include "../../matrixs/include/AstroMatrix.h"
#include "../../matrixs/include/ConjugateMatrix.h"
#include "../../matrixs/include/Rotation.h"
#include "../../matrixs/include/TimeMatrix.h"
#include "../../matrixs/include/Matrix.h"

#include <iostream>

/************************************/
/*     Астроинерциальная матрица    */
/************************************/

Matrix3x3 AstroInertialMode(
                            float Theta, float Roll,
                            float Alpha_1, float Alpha_2, float Alpha_3,
                            float Alpha, float Delta, float Azimut,
                            float S);