
#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "ЗАДАНИЕ №1: Написать программу, которая для чисел в диапазоне от A до B определяла количество их делителей.\n\n";
    int A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    for (int i = A; i <= B; i++)
    {
        cout << "Делители для числа: " << i << "--";
        for (int j = 1; j <= i; j++)

            if (i % j == 0)

                cout << j << " ";
        cout << endl;
    }
    cout << "\n\n";
    cout << "ЗАДАНИЕ №2: Создать программу, которая выводит на экран простые числа в диапазоне от 2 до 1000.\n\n";//подсмотрел

    int sum = 0;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 2; j <= (i / j); j++)

            if (!(i % j))   break;         // если число имеет множитель, значит, оно не простое
        if (j > (i / j))
            cout << i << " ";
    }
    cout << "\n\n";
    cout << "ЗАДАНИЕ №3: Написать программу, которая выводит на экран снежинку\n\n";
    int n;
    cout << "Введите положительное нечётное число: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {

            if (i == j || i + j == n - 1 || i == n / 2 || j == n / 2)
            {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }
        cout << "\n";
    }
    cout << "\n\n";

    cout << "ЗАДАНИЕ №4: На чемодане стоит трехзначный код. Он состоит из цифр, которые не повторяются.\n\n";

    int sum1 = 0;
    for (int i = 0; i <= 9; i++)  //полностью скопировал решение прошлого домашнего задания немного изменив  
    {
        for (int x = 0; x <= 9; x++)
        {
            for (int y = 0; y <= 9; y++)
            {
                if (i != x && y != i && x != y)
                {
                    sum1++;// сохраняю кол-во вариантов, в которых все цифры разные
                    cout << i << x << y << " ";//вывожу разные варианты
                }
            }
        }
    }
    cout << "\n\n\n";
    cout << sum1 * 3 / 60 << " минут понадобится для открытия чемодана" << endl << endl;//считаю время исходя из кол-ва вариантов

    cout << "ЗАДАНИЕ №5: В конце мая фирма формирует отчет по заработной плате 12 сотрудников за весенний квартал.\n";
    cout << "Написать программу, которая будет запрашивать сумму заработной платы каждого сотрудника за Март, Апрель и Май.\n";
    cout << "Необходимо определить :\n";
    cout << "выплату по каждому сотруднику за квартал;\n";
    cout << "общую выплату по всем сотрудникам за квартал\n";
    int qua1 = 0, qua2 = 0, qua3 = 0, sum_qua = 0;
    cout << "\t\t\tРаботник №1\n";
    for (int a = 3, b = 0; a <= 5; a++)
    {
        cout << "Введите доход работника за " << a << "-й месяц: ";
        cin >> b;
        qua1 += b;

    }
    cout << "Доход работника №1 за квартал: " << qua1 << endl << endl;

    cout << "\t\t\tработник №2\n";
    for (int a = 3, b = 0; a <= 5; a++)
    {
        cout << "Введите доход работника за " << a << "-й месяц: ";
        cin >> b;
        qua2 += b;
    }
    cout << "Доход работника №2 за квартал: " << qua2 << endl << endl;

    cout << "\t\t\tРаботник №3\n";
    for (int a = 3, b = 0; a <= 5; a++)
    {
        cout << "Введите доход работника за " << a << "-й месяц: ";
        cin >> b;
        qua3 += b;
    }
    cout << "Доход работника №3 за квартал: " << qua3 << endl << endl;
    sum_qua = qua1 + qua2 + qua3;
    cout << "Доход всех работников за квартал: " << sum_qua << endl;

}
