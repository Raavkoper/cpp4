#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
protected: 
	std::string type;
 
public: 
	Animal(); 
	Animal( const Animal &rhs); 
	Animal(std::string newType);
	virtual ~Animal(); 
	Animal& operator=( const Animal &rhs);

	std::string getType() const;
	virtual void makesound() const;
}; 
 
#endif
