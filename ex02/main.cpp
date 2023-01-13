#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Dog basic;
    basic.setIdea("Kippsoep");
    basic.printThreeIdeas();
    {
        Dog tmp = basic;
        tmp.printThreeIdeas();
    }
}