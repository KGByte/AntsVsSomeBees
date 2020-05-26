#include "Insect.hpp"


Insect::Insect(int position) : currentPosition(position)
{   
    
}

char Insect::getInsectType()
{
    return insectType;
}

void Insect::setInsectType(char ins)
{
    insectType = ins;
}