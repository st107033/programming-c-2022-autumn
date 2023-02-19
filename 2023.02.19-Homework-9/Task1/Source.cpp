#include <iostream>

struct Animal {
	std::string type;
	std::string name;
	int age;

	Animal() {
		type = "";
		name = "";
		age = 0;
	}

	Animal(std::string type, std::string name, int age) {
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& an) {
		this->type = an.type;
		this->name = an.name;
		this->age = an.age;
	}

	~Animal() {
	}
};

void printAnimal(Animal an) {
	std::cout << "type: " << an.type << "\n" << "name: " << an.name << "\n" << "age: " << an.age << "\n\n";
}

void elderAnimal(Animal& an) {
	an.age++;
}

int main(int argc, char* argv[]) {
	Animal cat("cat", "Kot", 2);

	printAnimal(cat);
	elderAnimal(cat);
	printAnimal(cat);

	return EXIT_SUCCESS;
}
