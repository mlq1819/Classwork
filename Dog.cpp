#include "Dog.h"
#include <iostream>
#include <string>

using namespace std;

Dog::Dog(string name){
	this->name = name;
	this->breed = "Mutt";
}

void Dog::bark(){
	cout << "The " << this->breed << " says, Bark!" << endl;
}

Dog::~Dog(){
	cout << "The " << this->breed << " says, Goodbye Cruel World!" << endl;
}

Lab::Lab(string name){
	super(name);
	super->breed = "Lab";
}

int main(){
	Lab Smelly = Lab("Smelly");
	return 0;
}