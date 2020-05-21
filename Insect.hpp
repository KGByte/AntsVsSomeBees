#ifndef CRITTER_HPP
#define CRITTER_HPP



#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

/*
    Insect is the base class. Both Ants and Bees inherit from the Insect class
*/

class Insect
{
private:
protected:
//Think composition when selecting class member variables. What does an insect have? Remember has-a relationship
//Insect has armor, has a current position, has a type, etc...
    int armor;
    int currentPosition;
    enum InsectType
    {
        A = 4,
        B = 8
    };
public:
    InsectType insType;
    Insect() {};
    Insect(int);
    InsectType getType();
    void setInsectType(InsectType);
};


#endif