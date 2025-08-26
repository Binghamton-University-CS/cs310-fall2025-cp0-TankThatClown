#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animalP){
numAnimals=1;
animal=animalP;
}

void AnimalsInZoo::display(){
	cout << numAnimals << endl;
	if(numAnimals==1){
		animal.display();
	}
}
