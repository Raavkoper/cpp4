#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;

	brain = new Brain;
	type = "Dog";
}

Dog::Dog( const Dog& other) {
	std::cout << "Dog copy constructor called" << std::endl;

	brain = new Brain();
	*brain = *other.brain;
	this->type = other.type;
}
 
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;

	delete brain;
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "Dog = operator called" << std::endl;

	this->type = other.type;
	brain = new Brain();
	*brain = *other.brain;
	return *this;
}

void Dog::makesound() const {
	std::cout << "WOOF" << std::endl;
}

void Dog::setIdea(std::string idea) const {
	brain->setIdea(idea);
}

void Dog::printThreeIdeas(void) const {
	brain->printThreeIdeas();
}