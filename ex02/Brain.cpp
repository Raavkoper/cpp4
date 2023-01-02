#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;

	for (int i = 0; i < 100; i++) {
		ideas[i] = "Unsettie spaghettie";
	}
}
 
Brain::Brain( const Brain& other) {
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}

	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain desctructor called" << std::endl;
}

Brain&	Brain::operator=( const Brain& other) {
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}

	return *this;
}

void Brain::setIdea(std::string idea) {
	static int i;
	
	ideas[i] = idea;
	i %= 100;
}

void Brain::printThreeIdeas(void) {
	std::cout << ideas[0] << std::endl;
	std::cout << ideas[1] << std::endl;
	std::cout << ideas[2] << std::endl;
}