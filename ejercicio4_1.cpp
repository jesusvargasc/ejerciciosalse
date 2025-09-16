#include <iostream>

int main() {
    int arreglo[5] = {0, 0, 0, 0, 0};
    int suma = 0;
    int n=0;

    for (int i = 0; n < 5; i++) {
        std::cout << "Ingrese el elemento " << (i + 1) << ": ";
        std::cin >> arreglo[i]; 
        suma += arreglo[i];
        n++;
    }

    std::cout << "La suma de los elementos es: " << suma << std::endl;

    return 0;
}
