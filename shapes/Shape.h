#pragma once
#include <iostream>
#include <cmath>
#define M_PI 3.1415926

using namespace std;
// Класс должен быть шаблонным!
class Shape {
	int side_count = 1;    // Шаблонное или нет?
	float side_length = 0; // Шаблонное или нет?
public:
	float get_side_length() {
		return side_count;
	}
	float perimeter() {
		return 1;          // Перенести сюда работу шаблонной функции периметр 
	}
	Shape() {
	}
	// Переделать в печать в поток с помощью механизма дружественных функций
	void print_result() {
		cout << "Сторона: " << get_side_length() << endl;
		cout << "Периметр: " << perimeter() << endl;
		// cout << "Площадь: " << area << endl; // Доделать!
	}
};