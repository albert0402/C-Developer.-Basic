#pragma once

/************************************/
/*      Астроинерциальный режим     */
/************************************/

/* Используемые параметры:
- угол тангажа theta;
- угол крена roll;
- калибровочная поправка (сопряжение) по оси X alpha_1
- калибровочная поправка (сопряжение) по оси Y alpha_2
- калибровочная поправка (сопряжение) по оси Z alpha_3
- прямое восхождение alpha;
- склонение delta;
- азимут azimut;
- гринвичское время s.
*/

void astro_inertial_mode(
                            float theta, float roll,
                            float alpha_1, float alpha_2, float alpha_3,
                            float alpha, float delta, float azimut,
                            float s,
                            float (&AstroInertialModeResult)[3][3]);