#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;

	type = "Cat";
}
 
Cat::Cat( const Cat& other) {
	std::cout << "Cat copy constructor called" << std::endl;

	this->type = other.type;
}
 
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "Cat = operator called" << std::endl;
	this->type = other.type;

	return *this;
}

void Cat::makesound() const {
	std::cout << "Meow" << std::endl;
}