#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Напишите программу, которая вычисляет сумму целых
    // чисел от а до 500 (значение a вводится с клавиатуры).

    /*int a,counter = 0;
    cout << "Введите число a: "; cin >> a;
    for (; a <= 500; a++) {
        counter += a;
    }
    cout << "Сумма чисел от a до 500: " << counter;*/


    //  Напишите программу, которая запрашивает два целых числа
    //  x и y, после чего вычисляет и выводит значение x в степени y.

    /*int x, y;
    cout << "Задайте число y: "; cin >> y;
    cout << "Задайте степень x: "; cin >> x;
    cout << y << " в степени " << x << " = " << pow(y, x);*/
     

    // Найти среднее арифметическое всех целых чисел от 1 до 1000.

    /*float coun = 0;

    for (int i = 0; i < 1000; i++) {
        coun += i;
    }
    cout << "Среднеарифмитическое всех чисел от 1 до 1000 = " << coun / 1000;*/


    // Найти произведение всех целых чисел от a до 20 (значение
    // a вводится с клавиатуры : 1 <= a <= 20).

    //int coun = 1, a;

    //cout << "Введите число a ( 1<= a <= 20):  "; cin >> a;

    //if (a >= 1 && a <= 20) {
    //    for (; a <= 20; a++) {
    //        coun *= a;
    //        cout << a << endl;
    //        cout << " == " << coun << endl; // я оставил это, чтобы вы сами убедились, что C++ делает число отрицательным
    //    }
    //    cout << "Произведение всех целых чисел от a до 20 = " << coun*-1;
    //}
    //else
    //    cout << "ОШИБКА!";


    // Написать программу, которая выводит на экран таблицу
    // умножения на k, где k — номер варианта.

    /*int k;

    cout << "Введите номер вариант: "; cin >> k;

    for (int i = 1; i < 11; i++) {
        cout << k << " x " << i << " = " << k * i << endl;
    }*/





}
