#include <iostream>

struct Shape {
	int a;
	int b;
	int c;

	Shape(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}
	~Shape() {}
};

struct Rectangle : Shape {
	Rectangle(int a = 0, int b = 0) : Shape(a, b, 0) {}
	~Rectangle() {}

	int s() {
		return a * b;
	}
};

struct Square : Rectangle {
	Square(int a = 0) : Rectangle(a, a) {}
	~Square() {}
};

struct Triangle : Shape {
	Triangle(int a, int b, int c) : Shape(a, b, c) {}
	~Triangle() {}

	double s() {
		double p = (a + b + c) / 2.0;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

struct Circle : Square {
	Circle(int a) : Square(a) {}

	double s() { 
		return Square::s() * 3.14; 
	}
};


int main(int argc, char* argv[]) {
	Rectangle r(3, 5);
	Square s(10);
	Triangle t(3, 4, 5);
	Circle c(3);

	std::cout << "rectangle: a = " << r.a << " b = " << r.b << " S = " << r.s() << "\n";
	std::cout << "square: a = " << s.a << " S = " << s.s() << "\n";
	std::cout << "triangle: a = " << t.a << " b = " << t.b << " c = " << t.c << " S = " << t.s() << "\n";
	std::cout << "circle: radius = " << c.a << " S = " << c.s() << "\n";

	return EXIT_SUCCESS;
}