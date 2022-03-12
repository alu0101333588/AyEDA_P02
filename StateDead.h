#ifndef STATE_DEAD_H
#define STATE_DEAD_H
#include <fstream>
#include <iostream>
#include <string>
#include "Grid.h"
#include "State.h"

//Clase Base

// Clases Derivadas
class StateDead : public State { // Muerte: 
    public:
        StateDead() {state_ = 'a';} // Añadida
        int neighbors (const Grid& rejilla1, int i, int j);
        State* nextState(); // En caso de éxito
        char getState() const {return ' ';}
    
    private:
        char state_;
};

#endif