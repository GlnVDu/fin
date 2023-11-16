#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int i, j, b, n, vibor, f;
    int max = 1000;
    int min = -1000;
    int a[5];
    cout << "Введите элементы массива: ";

    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "Вы ввели: ";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << "Выберите операцию над массивом: " << endl;
    cout << "(1) Расположить в порядке возростания" << endl;
    cout << "(2) Расположить в порядке убывания" << endl;
    cout << "(3) Найти максимум" << endl;
    cout << "(4) Найти минимум" << endl;
    cout << "(5) Найти четные элементы" << endl;
    cout << "(6) Найти нечетные элементы" << endl;
    cout << "(7) Разделить элементы" << endl;
    cout << "(8) Умножить элементы" << endl;
    cout << "(0) Остановить выполнение программы" << endl;
    cin >> vibor;
    switch (vibor) {
    case 1: {
        for (j = 0; j < 4; j++)
        {
            for (i = 0; i < 4; i++)
            {
                if (a[i] > a[i + 1])
                {
                    b = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = b;
                }
            }
            cout << "По возрастанию: ";
            for (i = 0; i < 5; i++)
            {
                cout << a[i] << " ";
            }
        }
        break;
    case (2): {
        for (j = 0; j < 4; j++)
        {
            for (i = 0; i < 4; i++)
            {
                if (a[i] < a[i + 1])
                {
                    b = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = b;
                }
            }
        }
        cout << "По убыванию: ";
        for (i = 0; i < 5; i++)
        {
            cout << a[i] << " ";
        }
    }
            break;
    case (3): {
        for (int i = 0; i < 5; ++i) {
            if (a[i] > max) {
                max = a[i];
            }
        }

        cout << "Максимальный элемент: " << max << endl;
    }
            break;
    case (4): {
        for (int i = 0; i < 5; ++i) {
            if (a[i] < min) {
                min = a[i];
            }
        }

        cout << "Минимальный элемент: " << min << endl;
    }
            break;
    case (5): {
        cout << "Четные элементы: ";
        for (i = 0; i < 5; i++) {
            if (a[i] % 2 == 0) {
                cout << a[i] << " ";
            }
        }
    }
    }
    }
}