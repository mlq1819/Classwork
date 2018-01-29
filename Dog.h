#ifndef MQ_DOG_H
#define MQ_DOG_H
#include <string>

class Dog{
	protected:
		std::string breed;
	public:
		Dog(string);
		std::string name;
		void bark();
		~Dog();
}


#endif