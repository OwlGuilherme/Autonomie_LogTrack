#include "funcs.hpp"
#include <iostream>

float autonomy(float km_inicial, float km_final, float volume_abastecido) {
   
    float distancia = km_final - km_inicial;
    float autonomia = distancia / volume_abastecido;

    return autonomia;
}

void menu(){
    
    float km_inicial, km_final, volume_abastecido;

    std::cout << "Digite a quilometragem inicial: ";
    std::cin >> km_inicial;

    std::cout << "Digite a quilometragem final: ";
    std::cin >> km_final;

    std::cout << "Digite o volume abastecido: ";
    std::cin >> volume_abastecido;
}