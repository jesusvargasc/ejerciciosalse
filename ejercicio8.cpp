#include <iostream>
#include <cmath>
int main(){
    double A,P,r,n,t;
    
    std::cout<<"Ingrese la cantidad inicial invertida: ";
    std::cin>>P;
    std::cout<<"Ingrese la tasa de interes anual en decimal: ";
    std::cin>>r;
    std::cout<<"Ingrese el numero de veces que se aplica el interes al año: ";
    std::cin>>n;
    std::cout<<"Ingrese el numero de años: ";
    std::cin>>t;
    
    A= P * std::pow(1 + (r/n),n*t);
    std::cout<<"El monto final es: "<<A<<std::endl;

    return 0;


}