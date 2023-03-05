#include "Animal.h"

int Animal::getPower() {
	return power;
}

std::string Animal::getName() {
	return name;
}

std::string Animal::getType() {
	return type;
}

void Animal::setName(std::string name) {
	this->name = name;
}

void Animal::setType(std::string type) {
	this->type = type;
}

void Animal::setPower(int power) {
	this->power = power;
}

void Animal::getInfo() {
	std::cout << "type:" << type << " name:" << name << " power:" << power << "\n";
}

void Animal::Mighter(int n) {
	power += n;
}

Animal::~Animal() {}
