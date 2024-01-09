#include <iostream>
#include <cmath>
#include "Shape.h"
#define M_PI 3.1415926

using namespace std;

template<typename T>
T circleLength(T radius) {
    return 2 * M_PI * radius;
}
template<typename T>
T calculateCircleArea(T radius) {
    return M_PI * pow(radius, 2);
}
template<typename T>
T calculateSideLength(T diagonal) {
    return sqrt(pow(diagonal, 2) / 2);
}
template<typename T>
T calculatePerimeter(T sideLength) {
    return 4 * sideLength;
}
template<typename T>
T calculateArea(T diagonal1, T diagonal2) {
    return (diagonal1 * diagonal2) / 2;
}
/* template<typename T>
T calculateSideLength(T perimeter) {
    return perimeter / 6;
} */
/* template<typename T>
T calculatePerimeter(T sideLength) {
    return 6 * sideLength;
} */
template<typename T>
T calculateArea(T sideLength) {
    return 2.598 * pow(sideLength, 2);
}

int main(int argc, char** argv) {
    int shapeChoice;
    int precisionChoice;

    cout << "Выберите фигуру для подсчета: " << endl;
    cout << "1. Окружность" << endl;
    cout << "2. Ромб" << endl;
    cout << "3. Шестиугольник" << endl;
    cin >> shapeChoice;

    cout << "Выберите точность подсчета: " << endl;
    cout << "1. Целочисленная" << endl;
    cout << "2. Десятичная" << endl;
    cin >> precisionChoice;

    if (shapeChoice == 1) {
        double radius;
        cout << "Введите радиус окружности: ";
        cin >> radius;

        if (precisionChoice == 1) {
            int perimeter = static_cast<int>(calculatePerimeter(radius));
            double area = static_cast<int>(calculateArea(radius));
            cout << "Периметр: " << perimeter << endl;
            cout << "Площадь: " << area << endl;
        }
        else {
            double perimeter = calculatePerimeter(radius);
            double area = calculateArea(radius);
            cout << "Периметр: " << perimeter << endl;
            cout << "Площадь: " << area << endl;
        }
    }
    else if (shapeChoice == 2) {
        double diagonal1, diagonal2;
        cout << "Введите первую диагональ ромба: ";
        cin >> diagonal1;
        cout << "Введите вторую диагональ ромба: ";
        cin >> diagonal2;

        if (precisionChoice == 1) {
            int sideLength = static_cast<int>(calculateSideLength(diagonal1));
            int perimeter = static_cast<int>(calculatePerimeter(sideLength));
            int area = static_cast<int>(calculateArea(diagonal1, diagonal2));
            cout << "Сторона: " << sideLength << endl;
            cout << "Периметр: " << perimeter << endl;
            cout << "Площадь: " << area << endl;
        }
        else {
            double sideLength = calculateSideLength(diagonal1);
            double perimeter = calculatePerimeter(sideLength);
            double area = calculateArea(diagonal1, diagonal2);
            cout << "Сторона: " << sideLength << endl;
            cout << "Периметр: " << perimeter << endl;
            cout << "Площадь: " << area << endl;

        }
    }
    else if (shapeChoice == 3) {
        double perimeter;
        cout << "Введите периметр шестиугольника: ";
        cin >> perimeter;

        if (precisionChoice == 1) {
            int sideLength = static_cast<int>(calculateSideLength(perimeter));
            int perimeter = static_cast<int>(calculatePerimeter(sideLength));
            int area = static_cast<int>(calculateArea(sideLength));
            cout << "Сторона: " << sideLength << endl;
            cout << "Периметр: " << perimeter << endl;
            cout << "Площадь: " << area << endl;
        }
        else {
            double sideLength = calculateSideLength(perimeter);
            double perimeter = calculatePerimeter(sideLength);
            double area = calculateArea(sideLength);
            cout << "Сторона: " << sideLength << endl;
            cout << "Периметр: " << perimeter << endl;
            cout << "Площадь: " << area << endl;
        }
    }
    else {
        cout << "Некорректный выбор фигуры." << endl;
    }

    return 0;
}
