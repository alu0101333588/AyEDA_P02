#ifndef STATEDEAD_H
#define STATEDEAD_H

#include "State.h"

//Clase Base

// Clases Derivadas
class StateDead : public State { // Muerte: 
    public:
        StateDead(); // Añadida
        //void neighbors (const Grid& rejilla1, int i, int j);
        State* nextState();
        char getState() const; // Temporal
        ~StateDead() = default; // IMPLEMENTAR
    
    private:
        char State_;
        int neighbors_;
};

#endif