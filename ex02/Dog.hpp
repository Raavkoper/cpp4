#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain *brain;

public: 
	Dog();
	Dog( const Dog &other); 
	~Dog(); 
	Dog& operator=( const Dog &other);

	void makesound() const;
	void setIdea(std::string idea) const;
	void printThreeIdeas(void) const;
}; 
 
#endif
