#ifndef MQ_DOGSHELTER_H
#define MQ_DOGSHELTER_H
#include <string>
#include "Dog.h"

class DogShelter{
	Dog ** dogs;
	int num_dogs;
	static int next_id = 0;
	public:
		DogShelter(int){}
		bool addDog(Dog);
		bool 
		Dog getDog(string);
}

#endif