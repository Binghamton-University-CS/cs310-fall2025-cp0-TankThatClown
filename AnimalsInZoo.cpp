#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal* animal){
numAnimals=1;
this.animal=animal;
}

void AnimalsInZoo::display(){
	cout << species << " [" <<numAnimals << "]" << endl;
	if(animal!=null){animal->display();}
}
