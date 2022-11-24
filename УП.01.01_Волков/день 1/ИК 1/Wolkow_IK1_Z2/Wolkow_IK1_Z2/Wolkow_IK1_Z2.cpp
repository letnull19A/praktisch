#include <iostream>

using namespace ::std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 0;

    cout << x << endl;

    cout << "Введите целое значение x:" << endl;
    cin >> x;

    x++;

    cout << "Результат: " << x << endl;

    system("pause");
}