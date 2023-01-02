#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "Trying to use an Animal class as a base" << std::endl;
    std::cout << std::endl;

    const Animal *cat = new Cat();
    const Animal *dog = new Dog();

    std::cout << std::endl;
    std::cout << "Trying to make an Animal object (uncomment)" << std::endl;
    std::cout << std::endl;

    // const Animal *animal = new Animal();
}