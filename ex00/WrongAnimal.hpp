#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
protected: 
	std::string type;
 
public: 
	WrongAnimal(); 
	WrongAnimal( const WrongAnimal &rhs); 
	WrongAnimal(std::string newType);
	~WrongAnimal(); 
	WrongAnimal& operator=( const WrongAnimal &rhs);

	std::string getType() const;
	void makesound() const;
}; 
 
#endif
