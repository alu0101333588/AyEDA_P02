#include <fstream>
#include <iostream>
#include <string>
#include "StateEgg.h"
#include "StateDead.h"

StateEgg::StateEgg() {
    State_ = 'H'; 
}

/*StateDead::~StateDead() {
    //delete *State_;
}*/


char StateEgg::getState() const {
    return State_;
}

State* StateEgg:: nextState() {
    return new StateEgg;
}