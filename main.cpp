#include <iostream>
#include <iomanip>

float autonomy(float km_inicial, float km_final, float volume_abastecido) {
    auto distancia = km_final - km_inicial;
    float autonomia = distancia / volume_abastecido;

    return autonomia;
}


int main() {

    float km_inicial, km_final, volume_abastecido;

    std::cout << "Digite a quilometragem inicial: ";
    std::cin >> km_inicial;

    std::cout << "Digite a quilometragem final: ";
    std::cin >> km_final;

    std::cout << "Digite o volume abastecido: ";
    std::cin >> volume_abastecido;

    std::cout << std::setprecision(3) << autonomy(km_inicial, km_final, volume_abastecido) << "km/l" << '\n';

    return 0;
}