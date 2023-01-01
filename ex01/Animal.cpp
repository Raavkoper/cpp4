#include "Animal.hpp"

Animal::Animal() : type("Random Zebra") {
	std::cout << "Animal constructor called" << std::endl;
}
 
Animal::Animal( const Animal &other) {
	std::cout << "Animal copy constructor called" << std::endl;

	this->type = other.type;
}
 
Animal::Animal(std::string newType)
	: type(newType) {

}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=( const Animal& rhs ) {
	std::cout << "Animal = operator called" << std::endl;

	return *this;
}

void Animal::makesound() const {
	std::cout << "*" << type << " noises...*" << std::endl;
}

std::string Animal::getType() const {
	return type;
}