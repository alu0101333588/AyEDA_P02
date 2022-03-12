#include <fstream>
#include <iostream>
#include <string>
#include "StateDead.h"

StateDead::StateDead() {
    State_ = 'M'; // TEMPORAL
    //char2 -> char1;
    //char1*->set('s');
    //setState(char1);
    //*neighbors_ = 2;
}

/*StateDead::~StateDead() {
    //delete *State_;
}*/


char StateDead::getState() const {
    return State_;
}

State* StateDead:: nextState() {
    return new StateDead;
}