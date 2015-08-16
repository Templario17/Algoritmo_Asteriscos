//
//  main.cpp
//  Ejercicio_1
//
//  Created by macintosh on 15/08/15.
//  Copyright (c) 2015 Daniel Andres Peña Cortes. All rights reserved.
//  Programa para deteermininar la impresion de asteriscos

#include <iostream>

using namespace std;

int filas,x,y;

int main() {
    
    std::cout << "Programa que imprime el numero de asteriscos"<<std::endl;
    std::cout << "ingrese el numero "<<std::endl;
    std::cin >> filas;
    for (x=1; x<=filas; x ++) {
        for (y=1;y<=x;y++){
            std::cout<<"*";
        }
        std::cout<<" "<<std::endl;
    }
    system("PAUSE");
    return 0;
}
