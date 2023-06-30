#include <iostream>
#include "triangle.h"

using namespace std;


void calculateAreaTriangle() {
	double base, height, area;
	cout << "Введите основание и высоту треугольника: ";
	cin >> base >> height;
	area = Triangle::calculateArea(base, height);
	cout << "Площадь треугольника: " << area << endl;
}


int main() {
	setlocale(LC_ALL, "Russian");

	int choice;
	bool exit = false;

	while (!exit) {
		system("cls");
		cout << "Выберите опцию:" << endl;
		cout << "1. Вычислить площадь треугольника" << endl;
		cout << "2. Выйти из программы" << endl;
		cout << "Сделайте выбор: ";
		cin >> choice;

		switch (choice) {
		case 1:
			calculateAreaTriangle();
			break;
		case 2:
			exit = true;
			break;
		default:
			cout << "Неправильный выбор. Пожалуйста, попробуйте еще раз." << endl;
			break;
		}

		system("pause");
	}

	return 0;
}