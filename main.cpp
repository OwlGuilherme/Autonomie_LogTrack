#include <iostream>

float autonomy(float km_inicial, float km_final, float volume_abastacido) {
    auto distancia = km_final - km_final;
    float autonomia = distancia / volume_abastacido;

    return autonomia;
}


int main() {

    float km_inicial, km_final, volume_abastacido;

    std::cout << "Digite a quilometragem inicial: ";
    std::cin >> km_inicial;

    std::cout << "Digite a quilometragem final: ";
    std::cin >> km_final;

    std::cout << "Digite o volume abastecido: ";
    std::cin >> volume_abastacido;

    std::cout << "Km inicial: " << km_inicial << "\n";
    std::cout << "Km final: " << km_final << "\n";
    std::cout << "Volume abastecido: " << volume_abastacido << "\n";

    return 0;
}