#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include "WrongAnimal.hpp"
 
class WrongCat : public WrongAnimal {
public: 
	WrongCat(); 
	WrongCat( const WrongCat &rhs); 
	~WrongCat(); 
	WrongCat& operator=( const WrongCat &rhs);

	void makesound() const;
}; 
 
#endif
