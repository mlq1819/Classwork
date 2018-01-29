#ifndef MQ_DOG_H
#define MQ_DOG_H
#include <string>

class Dog{
	protected:
		std::string breed;
	public:
		Dog(){}
		Dog(std::string);
		void bark();
		~Dog();
};

class Lab : public Dog{
	public:
		Lab(std::string name);
};


#endif