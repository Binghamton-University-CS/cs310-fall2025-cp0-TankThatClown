using namespace std;

class AnimalsInZoo{
public:
AnimalsInZoo(Animal animalP);
AnimalsInZoo():numAnimals(0){};
void display();

private:
      unsigned int  numAnimals=0;
       Animal animal;
};
