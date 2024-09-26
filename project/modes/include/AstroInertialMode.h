#pragma once

#include "../../calculations/include/AstroInertialModeResultMatrix.h"
#include "../../calculations/include/Result.h"
#include "../../calculations/include/Service.h"
#include "../../matrixs/include/Matrix.h"

/************************************/
/*      Астроинерциальный режим     */
/************************************/

/* Используемые параметры:
- угол тангажа Theta;
- угол крена Roll;
- калибровочная поправка (сопряжение) вокруг оси Z Alpha_1
- калибровочная поправка (сопряжение) вокруг оси X Alpha_2
- калибровочная поправка (сопряжение) вокруг оси Y Alpha_3
- прямое восхождение Alpha;
- склонение Delta;
- азимут Azimut;
- гринвичское время S.
*/

// Функция для обработки параметров астроинерциального режима
void AstroInertialMode();