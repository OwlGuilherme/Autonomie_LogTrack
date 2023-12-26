#include "funcs.hpp"
#include <iostream>
#include <iomanip>

float autonomy(float km_inicial, float km_final, float volume_abastecido) {
   
    float distancia = km_final - km_inicial;
    float autonomia = distancia / volume_abastecido;

    return autonomia;
}

void show_menu(){

    float km_inicial, km_final, volume_abastecido;

    std::cout << '\n';
    std::cout << "+------------------------------+" << '\n';
    std::cout << "|      Autonomie_LogTrack      |" << '\n';
    std::cout << "+------------------------------+" << '\n';
    std::cout << "| Para uma correta utlização,  |" << '\n';
    std::cout << "| complete o tanque nos dois   |" << '\n';
    std::cout << "| momentos.                    |" << '\n';
    std::cout << "+------------------------------+" << '\n';
    std::cout << '\n';

    std::cout << "Digite a quilometragem inicial: ";
    std::cin >> km_inicial;

    std::cout << "Digite a quilometragem final: ";
    std::cin >> km_final;

    std::cout << "Digite o volume abastecido: ";
    std::cin >> volume_abastecido;

    limpa_tela();

    std::cout << "Autonomia: " << std::setprecision(3) << autonomy(km_inicial, km_final, volume_abastecido) << "km/l" << '\n';
}

void limpa_tela(){
    std::cout << "\033[2J\033[H";
}