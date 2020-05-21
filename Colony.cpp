#include "Colony.hpp"

Colony::Colony() : gameBoard(10, nullptr), numBees(0), numAnts(0), turnCount(0)
{
    setIsOccupied(false);
}

Colony::~Colony()
{
    //need to add functionality to detect if multiple bees occupy the same spot
    for (auto &it : gameBoard)
        delete it;
}



void Colony::printBoard()
{
    for (auto &it : gameBoard)
    {
        if (it != nullptr)
            cout << it->getType();
        else
            cout << " ";
    }
    cout << endl;
}

void Colony::placeAnts()
{

}
void Colony::placeBees()
{

}
//create ant and place at specific location
void Colony::createAnt()
{   
    int position = 0;
    cout << "Where do you want to set your Ant? " << endl;
    cin >> position;

    //try position, make sure ant is within bounds and not on another ant
    while ((position < 0) || (position >= gameBoard.size()) && getIsOccupied() == true)
    {
        cout << "Ant position must be inside the bounds of the board, and cannot be on top of another ant" << endl;
        cin >> position;
    }

    gameBoard.at(position) = new Ant(position);
    setIsOccupied(isOccupied);
    numAnts++;
    cout << numAnts << endl;
}
//create bee and place at the far right of the board
void Colony::createBee(int position)
{

}

bool Colony::getIsOccupied()
{
    return isOccupied;
}

void Colony::setIsOccupied(bool occupied)
{
    isOccupied = occupied;
}