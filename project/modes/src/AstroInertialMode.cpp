#include "../include/AstroInertialMode.h"

/************************************/
/*      Астроинерциальный режим     */
/************************************/

void AstroInertialMode() {
    // Параметры для astro_inertial_mode
    float Theta = DegreesToRadians(ReadParameter("Theta"));
    float Gamma = DegreesToRadians(ReadParameter("Gamma"));
    float Alpha_1 = DegreesToRadians(ReadParameter("Alpha_1"));
    float Alpha_2 = DegreesToRadians(ReadParameter("Alpha_2"));
    float Alpha_3 = DegreesToRadians(ReadParameter("Alpha_3"));
    float Alpha = DegreesToRadians(ReadParameter("Alpha"));
    float Delta = DegreesToRadians(ReadParameter("Delta"));
    float Azimut = DegreesToRadians(ReadParameter("Azimut"));
    float S = DegreesToRadians(ReadParameter("S"));

    // Вызываем функцию AstroInertialMode
    Matrix3x3 AstroInertialModeResult = AstroInertialMode(Theta, Gamma, Alpha_1, Alpha_2, Alpha_3, Alpha, Delta, Azimut, S);

    // Вычисляем навигационную информацию
    NavigationData NavData = ComputeNavigationData(AstroInertialModeResult);
    NavData.Print();
}