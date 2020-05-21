
/*
    This class describes the ants and their behavior. The ant class is derived from the Insect class,
    but also is the parent class to multiple types of Ants (Harvester, Thrower, Wall, Hungry, Queen, Fire).
*/


#ifndef ANTS_HPP
#define ANT_HPP

#include "Insect.hpp"

class Ant : public Insect
{
private:
    int antPosition;
public:
//insect is instantiated with a position. Everything else is setup in the constructor
    Ant(int);
    void attack();
    void move();

};

#endif