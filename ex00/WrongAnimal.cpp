#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Random Zebra") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}
 
WrongAnimal::WrongAnimal( const WrongAnimal &other) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	this->type = other.type;
}
 
WrongAnimal::WrongAnimal(std::string newType)
	: type(newType) {

}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs ) {
	std::cout << "WrongAnimal = operator called" << std::endl;

	return *this;
}

void WrongAnimal::makesound() const {
	std::cout << "*" << type << " is pooping on the floor*" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}