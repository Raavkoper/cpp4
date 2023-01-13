#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;

	brain = new Brain;
	type = "Cat";
}
 
Cat::Cat( const Cat& other) {
	std::cout << "Cat copy constructor called" << std::endl;

	brain = new Brain;
	*brain = *other.brain;
	this->type = other.type;
}
 
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;

	delete brain;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "Cat = operator called" << std::endl;

	this->type = other.type;
	brain = new Brain();
	*brain = *other.brain;
	return *this;
}

void Cat::makesound() const {
	std::cout << "Meow" << std::endl;
}

void Cat::setIdea(std::string idea) const {
	brain->setIdea(idea);
}

void Cat::printThreeIdeas(void) const {
	brain->printThreeIdeas();
}