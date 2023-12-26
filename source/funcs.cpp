#include "funcs.hpp"
#include <iostream>

float autonomy(float km_inicial, float km_final, float volume_abastecido) {
   
    float distancia = km_final - km_inicial;
    float autonomia = distancia / volume_abastecido;

    return autonomia;
}