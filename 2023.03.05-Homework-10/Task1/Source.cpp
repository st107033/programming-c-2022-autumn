#include <iostream>
#include <ctime>
#include "Animal.h"

void deleteAnimal(Animal** arena, int n);

void battleRoyale(Animal** arena, int n, int round);

int main(int argc, char* argv[]) {
	srand(time(0));
	std::string names[10] = { "Kot", "Pyos", "Bob", "Bill", "Hank", "Tom", "Jerry", "Dale", "Beavis", "Butthead" };
	std::string types[10] = { "Cat", "Dog", "Fish", "Bear", "Shark", "Mouse", "Bird", "Horse", "Tiger", "Wolf" };
	Animal** arena = new Animal * [100];

	for (int i = 0; i < 100; ++i) {
		arena[i] = new Animal;
		int power = rand() % 10 + 1;
		int name = rand() % 10;
		int type = rand() % 10;
		arena[i]->setName(names[name]);
		arena[i]->setType(types[type]);
		arena[i]->setPower(power);
	}

	std::cout << "Battle participants!" << "\n\n";

	for (int i = 0; i < 100; ++i) {
		std::cout << i + 1 << " ";
		arena[i]->getInfo();
	}

	std::cout << "\n\n" << "Let the battle begin!" << "\n\n";

	battleRoyale(arena, 100, 1);
}

void deleteAnimal(Animal** arena, int n) {
	for (int i = 0; i < n; ++i) {
		delete arena[i];
	}
	delete[] arena;
}

void battleRoyale(Animal** arena, int n, int round) {
	if (n > 1) {
		std::cout << "Winners of the " << round << " round!" << "\n";

		Animal** nextArena = new Animal * [(n / 2) + n % 2];

		for (int i = 0; i < (n / 2) + n % 2; ++i) {
			nextArena[i] = new Animal;
		}

		int j = 0;
		for (int i = 0; i < n - 1; i += 2) {
			int agility = rand() % 100 + 60; // модификатор ловкости
			int animal1 = 0;
			int animal2 = 0;

			if (arena[i]->getPower() < 5) animal1 = (10 - arena[i]->getPower()) * agility / 100;
			else animal1 = arena[i]->getPower() * agility / 100;

			if (arena[i + 1]->getPower() < 5) animal2 = (10 - arena[i + 1]->getPower()) * agility / 100;
			else animal2 = arena[i + 1]->getPower() * agility / 100;

			if (animal1 <= animal2) {
				std::cout << j + 1 << ":  ";
				arena[i + 1]->getInfo();
				arena[i + 1]->Mighter(arena[i]->getPower() / 2);

				nextArena[j]->setName(arena[i + 1]->getName());
				nextArena[j]->setType(arena[i + 1]->getType());
				nextArena[j]->setPower(arena[i + 1]->getPower());
			}
			else {
				std::cout << j + 1 << ":  ";
				arena[i]->getInfo();
				arena[i]->Mighter(arena[i + 1]->getPower() / 2);

				nextArena[j]->setName(arena[i]->getName());
				nextArena[j]->setType(arena[i]->getType());
				nextArena[j]->setPower(arena[i]->getPower());
			}
			j++;
		}

		if (n % 2 == 1) {
			nextArena[j]->setName(arena[n - 1]->getName());
			nextArena[j]->setType(arena[n - 1]->getType());
			nextArena[j]->setPower(arena[n - 1]->getPower());

			std::cout << j + 1 << ":  ";
			nextArena[j]->getInfo();
		}

		deleteAnimal(arena, n);

		battleRoyale(nextArena, (n / 2) + n % 2, round + 1);
	}
	else {
		std::cout << "\n" << "Thw winner is " << "\n";
		arena[0]->getInfo();

		deleteAnimal(arena, n);
	}
}
