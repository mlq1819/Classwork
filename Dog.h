#ifndef MQ_DOG_H
#define MQ_DOG_H
#include <string>

class Dog{
	protected:
		string breed;
	public:
		Dog(string name);
		string name;
		void bark();
		~Dog();
}


#endif