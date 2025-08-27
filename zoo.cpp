#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;
int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal *animal3= new Animal("Silverback Gorilla",1828);
   AnimalsInZoo *zooAnimals1= new AnimalsInZoo(animal2);
  AnimalsInZoo *zooAnimals2 = new AnimalsInZoo();
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3->display();
   cout << "With object passed" <<endl;
   zooAnimals1->display();
   cout << "No object passed" << endl;
   zooAnimals2->display();


   delete animal1;
}
