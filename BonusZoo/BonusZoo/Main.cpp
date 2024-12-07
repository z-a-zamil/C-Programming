#include<iostream>
#include<string.h>	
#include "Zoo.h"
using namespace std;

int main() {

	//   ***********  TASK_01 ***********

	string s; 
	int x, m = 0, newSize = 0, k=0;

	cout << "\t  ***********  TASK_01 ***********" << endl << endl;
	Zoo zoo_01(7, 13, 17);
	for (int i = 0; i < 7; i++) {
		cout << " Enter animal name for zoo_01: ";
		cin >> s;
		cout << " Animal quantity: ";
		cin >> x;
		zoo_01.setValue(s, x, i);
	}
	cout << endl;
	
	Zoo zoo_02(6, 28, 2);
	for (int i = 0; i < 6; i++) {
		cout << " Enter animal name for zoo_02: ";
		cin >> s;
		cout << " Animal quantity: ";
		cin >> x;
		zoo_02.setValue(s, x, i);
	}
	cout << endl;

	Zoo zoo_03(8, 7, 14);
	for (int i = 0; i < 8; i++) {
		cout << " Enter animal name for zoo_03: ";
		cin >> s;
		cout << " Animal quantity: ";
		cin >> x;
		zoo_03.setValue(s, x, i);
	}
	cout << endl << endl;



	//   ***********  TASK_02 ***********
	cout << "\t  ***********  TASK_02 ***********" << endl << endl;
	
	
	if (zoo_01.getAnimalIndex("Elephant") != -1) {
		cout << " Zoo_01 has Elephants" << endl << endl;
	}

	if (zoo_02.getAnimalIndex("Elephant") != -1) {
		cout << " Zoo_02 has Elephants" << endl << endl;
	}

	if (zoo_03.getAnimalIndex("Elephant") != -1) {
		cout << " Zoo_03 has Elephants" << endl << endl;
	}

	int num = zoo_01.getAnimalIndex("Snake");
	cout << " Zoo_01 has " << zoo_01.getNoanimalExist(num) << " Snakes" << endl << endl;
	
	if (zoo_01.getAnimalIndex("Turtles") != -1) {
		cout << " Go to Zoo_01 to see Turtles" << endl << endl;
	}

	if (zoo_02.getAnimalIndex("Turtles") != -1) {
		cout << " Go to Zoo_02 to see Turtles" << endl << endl;
	}

	if (zoo_03.getAnimalIndex("Turtles") != -1) {
		cout << " Go to Zoo_03 to see Turtles" << endl << endl;
	}

	int dnum1 = zoo_01.getAnimalIndex("Deer"); 
	int dnum2 = zoo_02.getAnimalIndex("Deer");
	int dnum3 = zoo_03.getAnimalIndex("Deer");

	if ((zoo_01.getNoanimalExist(dnum1) > zoo_02.getNoanimalExist(dnum2)) && (zoo_01.getNoanimalExist(dnum1) > zoo_03.getNoanimalExist(dnum3)))
		cout << " Zoo_01 has the highest number of Deer" << endl << endl;
	else if ((zoo_02.getNoanimalExist(dnum2) > zoo_01.getNoanimalExist(dnum1)) && (zoo_02.getNoanimalExist(dnum2) > zoo_03.getNoanimalExist(dnum3)))
		cout << " Zoo_02 has the highest number of Deer" << endl << endl;
	else 
		cout << " Zoo_03 has the highest number of Deer" << endl << endl;
	
	
	int t1 = zoo_01.getNoanimalExist(zoo_01.getAnimalIndex("Tiger")) + zoo_01.getNoanimalExist(zoo_01.getAnimalIndex("Lion"));
	int t2 = zoo_02.getNoanimalExist(zoo_02.getAnimalIndex("Tiger")) + zoo_02.getNoanimalExist(zoo_02.getAnimalIndex("Lion"));
	int t3 = zoo_03.getNoanimalExist(zoo_03.getAnimalIndex("Tiger")) + zoo_03.getNoanimalExist(zoo_03.getAnimalIndex("Lion"));

	int leastNum = ((t1 < t2) && (t1 < t3)) ? t1 :((t2 < t1) && (t2 < t3)) ? t2 :t3 ;

	if (leastNum == t1)
		cout << " Zoo_01 has the least number of Tiger and Lion combined." << endl << endl;
	else if (leastNum == t2)
		cout << " Zoo_02 has the least number of Tiger and Lion combined." << endl << endl;
	else
		cout << " Zoo_03 has the least number of Tiger and Lion combined." << endl << endl;
	
	cout << endl;

	//   ***********  TASK_03 ***********
	cout << "\t  ***********  TASK_03 ***********" << endl << endl;

	int xC, yC;
	cout << " Enter User's Co-ordinates: ";
	cin >> xC >> yC;

	cout << " Total animals at zoo_01: " << zoo_01.getTotalNoOfAnimal() << endl;
	cout << " Total animals at zoo_02: " << zoo_02.getTotalNoOfAnimal() << endl;
	cout << " Total animals at zoo_03: " << zoo_03.getTotalNoOfAnimal() << endl << endl;

	cout << " Distance user and zoo_01: " << zoo_01.distance(xC, yC) << endl;
	cout << " Distance user and zoo_02: " << zoo_02.distance(xC, yC) << endl;
	cout << " Distance user and zoo_03: " << zoo_03.distance(xC, yC) << endl << endl;

	cout << " Animals of Zoo_02:" << endl;
	zoo_02.print();

	cout << endl << endl;

	//   ***********  TASK_04 ***********
	cout << "\t  ***********  TASK_04 ***********" << endl << endl;

	int z1a = zoo_01.getTotalNoOfAnimal();
	int z2a = zoo_02.getTotalNoOfAnimal();
	int z3a = zoo_03.getTotalNoOfAnimal();

	int maxAnimal = ((z1a > z2a) && (z1a > z3a)) ? z1a : ((z2a > z1a) && (z2a > z3a)) ? z2a : z3a;
	if (maxAnimal == z1a)
		cout << " Zoo_01 has the most number of animals." << endl << endl;
	else if (maxAnimal == z2a)
		cout << " Zoo_02 has the most number of animals." << endl << endl;
	else
		cout << " Zoo_03 has the most number of animals." << endl << endl;
	

	int Cx, Cy;
	cout << " Enter My Co-ordinates: ";
	cin >> Cx >> Cy;

	float d1 = zoo_01.distance(Cx, Cy);
	float d2 = zoo_02.distance(Cx, Cy);
	float d3 = zoo_03.distance(Cx, Cy);

	float closestZoo = ((d1 < d2) && (d1 < d3)) ? d1 : ((d2 < d1) && (d2 < d3)) ? d2 : d3;
	if (closestZoo == d1)
		cout << " Zoo_01 is the closest to me." << endl << endl;
	else if (closestZoo == d2)
		cout << " Zoo_02 is the closest to me." << endl << endl;
	else
		cout << " Zoo_03 is the closest to me." << endl << endl;


	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			if ((zoo_01.getAnimal(i).compare(zoo_02.getAnimal(j)) == 0))
				m++;
		}
	}

	newSize = m + (7 - m) + (6 - m);
	Zoo newZoo(newSize, 28, 17);

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			if ((zoo_01.getAnimal(i).compare(zoo_02.getAnimal(j)) == 0)) {
				newZoo.setValue(zoo_01.getAnimal(i), (zoo_01.getNoanimalExist(i) + zoo_02.getNoanimalExist(j)), k++);
				zoo_01.setValue("0", 0, i);
				zoo_02.setValue("0", 0, j);
				break;
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		if (((zoo_01.getAnimal(i).compare("0")) != 0)) {
			newZoo.setValue(zoo_01.getAnimal(i), zoo_01.getNoanimalExist(i), k++);
		}
	}

	for (int j = 0; j < 6; j++) {
		if (((zoo_02.getAnimal(j).compare("0")) != 0)) {
			newZoo.setValue(zoo_02.getAnimal(j), zoo_02.getNoanimalExist(j), k++);
		}
	}
	cout << "  Animals of New Zoo: " << endl << endl;
	newZoo.print();

	cout << endl << endl;
	
	string str;
	cout << " Enter an animal name to search: ";
	cin >> str;

	if (newZoo.getAnimalIndex(str) != -1) {
		int z = newZoo.getNoanimalExist(newZoo.getAnimalIndex(str));
		cout << " New Zoo has " << z << "  " << str << endl << endl;
	}
	else {
		cout << str << " Doesn't Exist !! " << endl;
	}
	
	return 0;
}