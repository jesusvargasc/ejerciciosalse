#include <iostream>

int main(){

    std::cout<<"Programa que calcula MCD, por favor poner números enteres y pequeños"<<std::endl;
    int j,s;
    std::cout<<"Ingrese el primer número:";
    std::cin>>j;
    std::cout<<"Ingrese el segundo número:";
    std::cin>>s;

    int a = j, b = s;  // Copias de los números para manipular sin alterar originales

    int factoresA[100], factoresB[100];  
    int countA = 0, countB = 0;           

    while (a % 2 == 0) {          
        factoresA[countA++] = 2;  
        a /= 2;                   
    }

    for (int i = 3; i * i <= a; i += 2) {  
        while (a % i == 0) {                
            factoresA[countA++] = i;        
            a /= i;                        
        }
    }

    if (a > 2) {                   
        factoresA[countA++] = a;    
    }

    while (b % 2 == 0) {          
        factoresB[countB++] = 2;  
        b /= 2;
    }

    for (int i = 3; i * i <= b; i += 2) {  
        while (b % i == 0) {
            factoresB[countB++] = i;
            b /= i;
        }
    }

    if (b > 2) {                  
        factoresB[countB++] = b;
    }

    int mcd = 1;  

    for (int i = 0; i < countA; i++) {         
        int factor = factoresA[i];              
        for (int j = 0; j < countB; j++) {    
            if (factoresB[j] == factor) {       
                mcd *= factor;                   
                factoresB[j] = -1;               
                break;                          
            }
        }
    }

   std:: cout << "El MCD de " << j << " y " << s << " es: " << mcd << std::endl;

    return 0;  
}

    
