

/*
    The Bee class inherits from the Insect class, and is not a parent class to any other class,
    because there is only one type of bee. The functionality of the bee is simple. The bees enter
    from the right side at position 10, and move from right to left in an attempt to get to the
    Queen ant. They have an armor of 3 and a damage of 1 (Good think they aren't those murder hornets lmao).
*/


#ifndef BEES_HPP
#define BEES_HPP

#include "Insect.hpp"

class Bee : public Insect
{
public:
    Bee(int);
};

#endif