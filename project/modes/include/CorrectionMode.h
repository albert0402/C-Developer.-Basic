#pragma once

#include "../../calculations/include/CoorectionModeResultMatrix.h"
#include "../../calculations/include/Result.h"
#include "../../calculations/include/Service.h"
#include "../../matrixs/include/Matrix.h"

/************************************/
/*          Режим коррекции         */
/************************************/

/* Используемые параметры:
- угол курса Psi;
- географическая широта Phi;
- географическая долгота Lambda.
*/

// Функция для обработки параметров режима correction
void CorrectionMode();