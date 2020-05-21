#include "Insect.hpp"


Insect::Insect(int position) : currentPosition(position)
{   
    
}

Insect::InsectType Insect::getType()
{
    return insType;
}

void Insect::setInsectType(Insect::InsectType ins)
{
    insType = ins;
}