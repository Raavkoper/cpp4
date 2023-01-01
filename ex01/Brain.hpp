#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
 
class Brain {
private: 
	std::string ideas[100];
 
public: 
	Brain(); 
	Brain( const Brain &rhs); 
	~Brain(); 
	Brain& operator=( const Brain &rhs); 
}; 
 
#endif
