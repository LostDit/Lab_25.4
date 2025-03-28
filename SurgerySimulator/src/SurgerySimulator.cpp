#include <iostream>
#include <windows.h>
#include "surgery_tools.h"

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    Point startCut, endCut, sutureStart, sutureEnd;

    //Начало операции
    std::cout << "Операция начата.\n";

    //Команда scalpel
    std::cout << "Введите начальную точку разреза \n";
    startCut.input();
    std::cout << "Введите конечную точку разреза \n";
    endCut.input();
    scalpel(startCut, endCut);

    //Команда hemostat
    std::cout << "Введите точку для зажима \n";
    Point hemostatPoint;
    hemostatPoint.input();
    hemostat(hemostatPoint);

    //Команда tweezers
    std::cout << "Введите точку для применения пинцета. \n";
    Point tweezersPoint;
    tweezersPoint.input();
    tweezers(tweezersPoint);

    //Команда suture
    std::cout << "Введите начальную точку шва \n";
    sutureStart.input();
    std::cout << "Введите конечную точку шва \n";
    sutureEnd.input();
    suture(sutureStart, sutureEnd);

    //Проверка на завершение операции
    if (sutureStart.equals(sutureEnd)) {
        std::cout << "Операция завершена.\n";
    }
    else {
        std::cout << "Ошибка: начальная и конечные точки шва не совпадают.\n";
    }
    system("pause");
    return 0;
}