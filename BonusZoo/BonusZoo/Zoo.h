#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED
#include <iostream>

/*
    Variables                    Explanation
==========================================================
--totalNoOfAnimal       Total number of Animals
--NoOfUniqueAnimal      Number of Unique animals
--xcordinate            Co-ordinate of the Zoo along x-axis
--ycordinate            Co-ordinate of the Zoo along y-axis

--animals [1000]        Stores name of Unique animals
--noOfAnimalsEach[1000] Stores number of animals exists
*/

class Zoo
{
private:
    int totalNoOfAnimal, NoOfUniqueAnimal, xcordinate, ycordinate;
    std::string animals[1000];
    int noOfAnimalsEach[1000];
public:
    Zoo(int, int, int);
    ~Zoo();
    void setValue(std::string, int, int);
    int getNoanimalExist(int);
    int getAnimalIndex(std::string);
    int getTotalNoOfAnimal();
    float distance(int, int);
    void print();
    std::string getAnimal(int);
};

#endif // ZOO_H_INCLUDED
