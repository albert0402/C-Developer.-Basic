#pragma once

/************************************/
/*          Режим коррекции         */
/************************************/

/* Используемые параметры:
- угол курса psi;
- географическая широта phi;
- географическая долгота lambda.
*/

void correction_mode(
                        float psi,
                        float lambda, float phi,
                        float (&CoorectionModeResult)[3][3]);