#include "Dog.h"
#include <string>

using namespace std;

Dog::Dog(string name){
	this->name = name;
	this->breed = "Mutt";
}

void Dog::Bark(){
	cout << "Bark!" << endl;
}

Dog::~Dog(){
	cout << "Goodbye Cruel World!" << endl;
}