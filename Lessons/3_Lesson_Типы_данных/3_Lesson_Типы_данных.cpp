﻿// 3_Lesson_Типы_данных.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
#pragma region Числовые
    // c плавающей точкой
    float floatVal = 0;             // 4 байта - описывает вещественные числа одинарной точности
    double doubleVal = 0;           // 8 байт - описывает вещественные числа двойной точности

    // целые
    int intVal = 2147483648;        // 4 байта - описывает целые числа -2147483648:2147483648
    short shortVal = 32767;         // 2 байта - описывает короткие целые числа -32767:32767
    long longVal = 2147483648;      // 4 байта - описывает длинные целые числа -2147483648:2147483648
#pragma endregion

#pragma region Символьные
    char charVal = 'A';             // 1 байт - описывает символы
#pragma endregion

#pragma region Логические
    bool boolVal = true;            // 1 байт - описывает логические значения true:false
#pragma endregion

    cin.get();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
