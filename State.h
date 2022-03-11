#ifndef STATE_H
#define STATE_H
#include <fstream>
#include <iostream>
#include <string>
#include "Grid.h"

//Clase Base

class Grid;
class State {
    public:
        State() {}
        //virtual int neighbors (const Grid& rejilla1, int i, int j) = 0;
        //virtual State* nextState() = 0;
        //virtual char getState() const = 0;
        
        //void setState(char estado1) { estado_ = estado1; } // Añadido
        
    private:
        char estado_;

};

// Clases Derivadas
/*class StateDead : public State { // Muerte: 
    public:
        StateDead(); // Añadida
        int neighbors (const Grid& rejilla1, int i, int j);
        State* nextState(); // En caso de éxito
        char getState() const {return ' ';}
    
    private:
        char state_;
};*/

/*class StateEgg : public State { // Huevo: H
    public:
        StateEgg(State* estado1); // Constructor
        int neighbors (const Grid& rejilla1, int i, int j); // Devuelve 1 si se cumple la condición, sino devuelve 0
        State* nextState(); // En caso de éxito
        char getState() const {return 'H';}
};*/
/*
class StateLarva : public State { // Larva: L
    public:
        StateLarva();
        int neighbors (const Grid& rejilla1, int i, int j);
        State* nextState();
        char getState() const;
};

class StatePupa : public State { // Pupa: P
    public:
        StatePupa();
        int neighbors (const Grid& rejilla1, int i, int j);
        State* nextState();
        char getState() const;
};

class StateAdult : public State { // Adult: A
    public:
        StateAdult();
        int neighbors (const Grid& rejilla1, int i, int j);
        State* nextState();
        char getState() const;
};
*/



#endif