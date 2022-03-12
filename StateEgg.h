#ifndef STATEEGG_H
#define STATEEGG_H

#include "State.h"

//Clase Base

// Clases Derivadas
class StateEgg : public State { // Muerte: 
    public:
        StateEgg(); // Añadida
        //void neighbors (const Grid& rejilla1, int i, int j);
        State* nextState();
        char getState() const; // Temporal
        ~StateEgg() = default; // IMPLEMENTAR
    
    /*private:
        char State_;
        int neighbors_;*/
};

#endif