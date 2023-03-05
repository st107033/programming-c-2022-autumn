#pragma once
#include <iostream>

class Animal {
private:
	std::string type;
	std::string name;
	int power;

public:
	int getPower();

	std::string getName();

	std::string getType();

	void setName(std::string name);

	void setType(std::string type);

	void setPower(int power);

	void getInfo();

	void Mighter(int n);

	Animal(std::string type = "", std::string name = "", int power = 1) : type(type), name(name), power(power) {}

	Animal(const Animal& an) : name(an.name), type(an.type), power(an.power) {}

	~Animal();
};