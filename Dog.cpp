#include "Dog.h"
#include <iostream>
#include <string>

using namespace std;

Dog::Dog(string name){
	this->breed = "Mutt";
}

void Dog::bark(){
	cout << "The " << this->breed << " says, Bark!" << endl;
}

Dog::~Dog(){
	cout << "The " << this->breed << " says, Goodbye Cruel World!" << endl;
}

Lab::Lab(string name){
	this->breed = "Lab";
}

int main(){
	Lab lab = Lab("lab");
	Dog dog = Dog("dog");
	lab.bark();
	dog.bark();
	return 0;
}