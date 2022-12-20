#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrongcat = new WrongCat();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;

    animal->makesound();
    dog->makesound();
    cat->makesound();
    wrongcat->makesound();

    delete animal;
    delete dog;
    delete cat;
    delete wrongcat;
}