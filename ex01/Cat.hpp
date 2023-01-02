#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"
 
class Cat : public Animal {
private:
	Brain *brain;

public: 
	Cat(); 
	Cat( const Cat &rhs); 
	~Cat(); 
	Cat& operator=( const Cat &rhs);

	void makesound() const;
	void setIdea(std::string idea) const;
	void printThreeIdeas(void) const;
}; 
 
#endif
