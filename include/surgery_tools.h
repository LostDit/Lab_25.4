#ifndef SURGERY_TOOLS_H
#define SURGERY_TOOLS_H
#include <iostream>

struct Point {
	double x;
	double y;

	//������� ��� ����� �����
	void input() {
		std::cout << "������� ���������� �����(x,y): ";
		std::cin >> x >> y;
	}

	//������� ��� ������ �����
	void output() const {
		std::cout << "(" << x << "," << y << ")";
	}

	//������� ��� ��������� �����
	bool equals(const Point& other) const {
		return (x == other.x && y == other.y);
	}
};

//������� ��� ���������� �������
void scalpel(const Point& start, const Point& end) {
	std::cout << "������ ������ ����� ";
	start.output();
	std::cout << " � ";
	end.output();
	std::cout << ".\n";
}

//������� ��� ���������� ������
void hemostat(const Point& point) {
	std::cout << "������ ����� � ����� ";
	point.output();
	std::cout << ".\n";
}

//������� ��� ���������� ���������� �������
void tweezers(const Point& point) {
	std::cout << "������� ������ � ����� ";
	point.output();
	std::cout << ".\n";
}

//������� ��� ���������� ���
void suture(const Point& start, const Point& end) {
	std::cout << "������ ��� �����";
	start.output();
	std::cout << " � ";
	end.output();
	std::cout << ".\n";
}
#endif	//SURGERY_TOOLS_H