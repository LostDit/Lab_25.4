#ifndef SURGERY_TOOLS_H
#define SURGERY_TOOLS_H
#include <iostream>

struct Point {
	double x;
	double y;

	//Функция для ввода точки
	void input() {
		std::cout << "Введите координаты точки(x,y): ";
		std::cin >> x >> y;
	}

	//Функция для вывода точки
	void output() const {
		std::cout << "(" << x << "," << y << ")";
	}

	//Функция для сравнения точки
	bool equals(const Point& other) const {
		return (x == other.x && y == other.y);
	}
};

//Функция для выполнения разреза
void scalpel(const Point& start, const Point& end) {
	std::cout << "Сделан разрез между ";
	start.output();
	std::cout << " и ";
	end.output();
	std::cout << ".\n";
}

//Функция для выполнения зажима
void hemostat(const Point& point) {
	std::cout << "Сделан зажим в точке ";
	point.output();
	std::cout << ".\n";
}

//Функция для выполнения применения пинцета
void tweezers(const Point& point) {
	std::cout << "Применён пинцет в точке ";
	point.output();
	std::cout << ".\n";
}

//Функция для выполнения шва
void suture(const Point& start, const Point& end) {
	std::cout << "Сделан шов между";
	start.output();
	std::cout << " и ";
	end.output();
	std::cout << ".\n";
}
#endif	//SURGERY_TOOLS_H