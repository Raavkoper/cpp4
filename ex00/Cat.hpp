#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"
 
class Cat : public Animal {
public: 
	Cat(); 
	Cat( const Cat &rhs); 
	~Cat(); 
	Cat& operator=( const Cat &rhs);

	void makesound() const;
}; 
 
#endif
