#include "Zoo.h"
#include <iostream>
#include<string>
#include<math.h>

using namespace std;


Zoo::Zoo(int u, int a, int b) //Constructor
{
    xcordinate = a;
    ycordinate = b;
    totalNoOfAnimal = 0;
    NoOfUniqueAnimal = u;
    animals[u];
    noOfAnimalsEach[u];
}

Zoo::~Zoo() //Destructor
{
    xcordinate = NULL;
    ycordinate = NULL;
    totalNoOfAnimal = NULL;
    NoOfUniqueAnimal = NULL;
}

void Zoo::setValue(string s, int x, int index) //This function populates the zoo.
{
    animals[index] = s;
    noOfAnimalsEach[index] = x;
    totalNoOfAnimal += x;
}

int Zoo::getAnimalIndex(string name)//This function returns the index for each animal in the array. '-1' indicates when animals are not found.
{
    int i = 0;
    while (i < NoOfUniqueAnimal + 1 && animals[i] != name) { i++; }
    if (i < NoOfUniqueAnimal + 1) return i;
    else return -1;
}

int Zoo::getNoanimalExist(int index)//This function returns the number of animals exists for each unique animal in the 'animals' array by index.
{
    if (index >= 0) 
        return  noOfAnimalsEach[index];
    else 
        cout << "Does not exist!" << endl;
}


int Zoo::getTotalNoOfAnimal() {
    return totalNoOfAnimal;
}

float Zoo:: distance(int x, int y) {
    return sqrt((powf((x - xcordinate),2))+(powf((y - ycordinate), 2)));
}

void Zoo::print() {
    for (int i = 0; i < NoOfUniqueAnimal; i++) {
        cout << "   " << animals[i] << " ----> " << noOfAnimalsEach[i] << endl;
    }
}

string Zoo::getAnimal(int i) {
        return animals[i];
}