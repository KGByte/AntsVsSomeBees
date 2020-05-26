
/*
    The colony class is where the game is played. The colony has a vector of insect pointers,
    which simulates a 1D row of the Ant colony where the battle is happening. The bees enter
    from the right at position 10 and the ants are placed wherever. The Queen is located at position 0
    and will remain there until the game is over. The game ends if the bees get to position Zero
    or the ants kill all the bees (how tho lmao).
*/

#ifndef COLONY_HPP
#define COLONY_HPP


#include "Insect.hpp"
#include "Ants.hpp"
//#include "Bees.hpp"


class Colony
{
private:
    //1D game board, from 0 to 10
    vector<Insect*> gameBoard;
    int numBees;
    int numAnts;
    int turnCount;
    bool isOccupied;
    //int insectPosition;
public:
    Colony();
    ~Colony();

    void printBoard();
    void placeAnts();
    void placeBees();
    //create ant and place at specific location
    void createAnt();;
    //create bee and place at the far right of the board
    void createBee(int);
    void setIsOccupied(bool);
    bool getIsOccupied();
};


#endif