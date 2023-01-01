#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;

	type = "Dog";
}
 
Dog::Dog( const Dog& other) {
	std::cout << "Dog copy constructor called" << std::endl;

	this->type = other.type;
}
 
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=( const Dog& rhs ) {
	std::cout << "Dog = operator called" << std::endl;

	return *this;
}

void Dog::makesound() const {
	std::cout << "WOOF" << std::endl;
}