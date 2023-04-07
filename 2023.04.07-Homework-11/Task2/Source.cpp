#include <iostream>
#include <string>

struct Student {
	std::string name;
	std::string lastname;
	double marks;

	Student(std::string name = "", std::string lastname = "", double marks = 0) : name(name), lastname(lastname), marks(marks) {}
	Student(const Student& s) : name(s.name), lastname(s.lastname), marks(s.marks) {}
	~Student() {}
};

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;

	Student** arr = new Student * [n];

	for (int i = 0; i < n; ++i) {
		arr[i] = new Student;
	}

	for (int i = 0; i < n; ++i) {
		int x1 = 0;
		int x2 = 0;
		int x3 = 0;
		std::cin >> arr[i]->name >> arr[i]->lastname >> x1 >> x2 >> x3;
		arr[i]->marks = (x1 + x2 + x3) / 3.0;
	}

	for (int i = 0; i < n; ++i) {
		bool f = 1;

		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j]->marks < arr[j+1]->marks) {
				std::swap(arr[j]->name, arr[j + 1]->name);
				std::swap(arr[j]->lastname, arr[j + 1]->lastname);
				std::swap(arr[j]->marks, arr[j + 1]->marks);
				f = 0;
			}
		}

		if (f == 1) break;
	}

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i]->name << " " << arr[i]->lastname  << "\n";
	}

	for (int i = 0; i < n; ++i) {
		delete arr[i];
	}
	delete[] arr;

	return EXIT_SUCCESS;
}