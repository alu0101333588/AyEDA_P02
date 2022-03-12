#include <fstream>
#include <iostream>
#include <string>
//#include "Grid.h"
//#include "State.h"
// #include "StateEgg.h"

// Estado Huevo (H)
/*StateEgg::StateEgg () {
    state_ = ' ';
}

int StateEgg::neighbors (const Grid& rejilla1, int i, int j) { // Devuelve 1 si se cumple la condición, sino devuelve 0
    int contador_larvas = 0;
    int contador_huevos = 0;
    for (int a = i-1; a < i+2; a++){
        for (int b = j-1; b < j+2; b++){
            //std::cout << "Contador: " << i << ", " << j << " :: " << i_ << ", " << j_ << std::endl;
            if (b != j || a != i) { // Evitar que se cuente a sí misma

                char estado1 = rejilla1.getCell(a,b).getState();
                if (estado1 == 'L') {
                    contador_larvas++;
                }  

                if (estado1 == 'H') {
                    contador_huevos++;
                }  
            }    
        }
    }

    if (contador_larvas > contador_huevos) {
        return 1;
    } 
    return 2;
}


StateEgg::State* nextState() {
    StateDead estado1;
    return estado1;
}


// Estado Muerte ( )
StateDead::StateDead () {
    state_ = ' ';
}

StateDead::State* nextState() {
    StateDead estado1;
    return estado1;
}

int StateDead::neighbors (const Grid& rejilla1, int i, int j) { // Devuelve el número de células adultas vecinas
    int contador_adultas = 0;
    for (int a = i-1; a < i+2; a++){
        for (int b = j-1; b < j+2; b++){
            //std::cout << "Contador: " << i << ", " << j << " :: " << i_ << ", " << j_ << std::endl;
            if (b != j || a != i) { // Evitar que se cuente a sí misma

                char estado1 = rejilla1.getCell(a,b).getState();
                if (estado1 == 'A') {
                    contador_adultas++;
                }  
            }    
        }
    }
    return contador_adultas;
}*/
