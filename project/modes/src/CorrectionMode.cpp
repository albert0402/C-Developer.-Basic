#include "../include/CorrectionMode.h"

void CorrectionMode() {
    // Параметры для correction_mode
    float Psi = DegreesToRadians(ReadParameter("Psi"));
    float Lambda = DegreesToRadians(ReadParameter("Lambda"));
    float Phi = DegreesToRadians(ReadParameter("Phi"));

    // Вызываем функцию CorrectionMode
    Matrix3x3 CorrectionMatrix = CorrectionMode(Psi, Lambda, Phi);

    // Вычисляем навигационную информацию
    NavigationData NavData = ComputeNavigationData(CorrectionMatrix);
    NavData.Print();
}
