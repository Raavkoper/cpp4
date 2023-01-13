#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    {
        const Animal *array[4];

        for (int i = 0; i < 4; i++) {
            std::cout << i << std::endl;
            if (i < 2)
                array[i] = new Cat();
            else
                array[i] = new Dog();
        }

        std::cout << std::endl;
        std::cout << "Constructed 2 Cats and 2 Dogs" << std::endl;
        std::cout << std::endl;

        for (int i = 0; i < 4; i++) {
            std::cout << i << std::endl;
            delete array[i];
        }

        std::cout << std::endl;
        std::cout << "Deleted the Cats and Dogs" << std::endl;
        std::cout << std::endl;
    }
    {
        const Cat *cat = new Cat();
        std::cout << std::endl;

        cat->setIdea("Real g's move in silent like lasagna");
        cat->printThreeIdeas();
        std::cout << std::endl;

        const Cat *cat2 = new Cat(*cat);
        std::cout << std::endl;

        cat->printThreeIdeas();
    }
}