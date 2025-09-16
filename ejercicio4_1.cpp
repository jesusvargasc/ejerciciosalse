#include <iostream>

int main() {  
    int x, y, s, j, z;
    int aux;
    std::cout << "Ingrese el primer digito: ";
    std::cin >> x;
    std::cout << "Ingrese el segundo digito: ";
    std::cin >> y;
    std::cout << "Ingrese el tercer digito: ";
    std::cin >> s;
    std::cout << "Ingrese el cuarto digito: ";
    std::cin >> j;
    std::cout << "Ingrese el quinto digito: ";
    std::cin >> z;
    aux = x + y + s + j + z;
    std::cout << "La suma de todas las variables es: " << aux << std::endl;
    return 0;
}