#include "stdafx.h"
#include <iostream>

using namespace std;

// При выполнениии арифметических операций компилятор руководствуется следующими правилами:
// 1. Если тип целочисленный, то выполняется операция над целочисленными числами
// 2. Если оба операнда имеют знак, или оба операнда беззнаковые, и один из них имеет меньший диапазон допустимых значений, чем другой, он преобразуется в тип, который имеет больший диапазон значений
// 3. Если один операнд имеет знак, а другой беззнаковый, в этом случаеесли беззнаковый операнд имеет больший диапазон допустимых значений, чем операнд со знаком, то знаковый операнд преобразуется в тип беззнакового операнда
// 4. Если тип со знаком может представить все значения беззнакового типа, беззнаковый операнд преобразуется к типу операнда со знаком.
// 5. Иначе оба операнда преобразуются в беззнаковую версию типа со знаком.
// 6. Если один из операндов имеет тип float, то другой операнд преобразуется в float.
// 7. Если один из операндов имеет тип double, то другой операнд преобразуется в double.
// 8. Если один из операндов имеет тип long double, то другой операнд преобразуется в long double.

int main()
{
    int operand1 = 3, operand2 = 2; // Множественное обьявление
    int result;

    // Сложение (+)
    result = operand1 + operand2;
    cout << result << endl;

    // Вычитание (-)
    result = operand1 - operand2;
    cout << result << endl;

    // Умножение (*)
    result = operand1 * operand2;
    cout << result << endl;

    // Деление (/)
    result = operand1 / operand2;
    cout << result << endl;

    // Получение остатка от деления
    result = operand1 % operand2;
    cout << result << endl;

    // Оператор % находит остаток от деления первого операнда на второй.
    // Оба операнда должны быть целочисленными, использование операции % над числами с плавающей точкой приведет к ошибке времени компиляции.

    // double err = 3.5 % 1.2;		// Ошибка

    result = 3 * 2 * 2;
    cout << result << endl;

    // Задержка
    cin.get();
    return 0;
}