#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
protected: 
	std::string type;
 
	Animal(); 
	Animal( const Animal &rhs); 
	Animal(std::string newType);
	Animal& operator=( const Animal &rhs);

public: 

	virtual ~Animal();
	std::string getType() const;
	virtual void makesound() const;
}; 
 
#endif
