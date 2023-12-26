#include <iostream>

struct Autonomy {
    int km_inicial;
    int km_final;
    float volume_abastacido;

    void input_data(int st_km_inicial, int st_km_final, float st_volume_abastacido){    
        km_inicial = st_km_inicial;
        km_final = st_km_final;
        volume_abastacido = st_volume_abastacido;
    }
};

int main() {

    return 0;
}