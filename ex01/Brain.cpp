#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		ideas[i] = "U"
	}
}
 
Brain::Brain( const Brain& other) {

	*this = other;
}

Brain::~Brain() {

}

Brain&	Brain::operator=( const Brain& rhs ) {
	return *this;
}
