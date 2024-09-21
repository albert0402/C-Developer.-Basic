#pragma once

void astro_inertial_mode(
                            float theta, float roll,
                            float alpha_1, float alpha_2, float alpha_3,
                            float alpha, float delta, float azimut,
                            float s,
                            float (&AstroInertialModeResult)[3][3]);