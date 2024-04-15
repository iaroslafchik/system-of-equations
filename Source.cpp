#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    setlocale(0, ".1251");

    printf("Введите t, в диапазоне от 0,5 до 3: ");

    double t = 0;
    if (scanf("%lf", &t) != 1) {
        printf("Ошибка!!!\nНеверное значение");
        return -1;
    }

    printf("Вы ввели следующий t: %lf\n", t);

    if (t >= 0.5 && t <= 3)
    {
        double a = 1.3, b = 2.5, z = 0.0;

        if (t < a)
        {
            z = a * pow(t, 2) - b * sqrt(t + 1);
        }
        else if (t > b)
        {
            z = a * pow(t, 2.0 / 3.0) - pow(t - 1, 1.0 / 3.0);
        }
        else
        {
            z = a - b;
        }

        printf("Z = %lf", z);
    }
    else
    {
        printf("Введеный t находится вне диапазона допустимых значений - [0.5; 3]!");
    }

    return 0;
}