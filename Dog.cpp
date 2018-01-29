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
	Lab Smelly = Lab("Smelly");
	Smelly.bark();
	return 0;
}