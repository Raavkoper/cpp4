#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;

	type = "WrongCat";
}
 
WrongCat::WrongCat( const WrongCat& other) {
	std::cout << "WrongCat copy constructor called" << std::endl;

	this->type = other.type;
}
 
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& rhs ) {
	std::cout << "WrongCat = operator called" << std::endl;

	return *this;
}

void WrongCat::makesound() const {
	std::cout << "weoM?" << std::endl;
}