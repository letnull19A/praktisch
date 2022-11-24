#include <iostream>
#include "students.h"
#include <cstdlib>
#include <string>
#include <Windows.h>

using namespace ::std;

bool score_is_valid(int test_score) {
    return (test_score <= 5 && test_score > 0);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Students student;
    string name;
    string last_name;

    cout << "Имя: ";
    getline(cin, name);

    cout << "Фамилия: ";
    getline(cin, last_name);

    student.set_name(name);
    student.set_last_name(last_name);

    int scores[5];
    
    int sum = 0;

    for (int i = 0; i < 5; i++) 
    {
        cout << "Оценка " << i + 1 << ":" << endl;

        do 
        {
            cin >> scores[i];

            if (score_is_valid(scores[i]))
            {
                sum += scores[i];
                break;
            }
            else {
                cout << "Введите корректную оценку " << i + 1 << ": " << endl;
            }

        } while (true);
    }

    student.set_scores(scores);

    float sred_ball = sum / 5.0;

    student.set_sred_ball(sred_ball);

    cout << "Средний бал студента " << student.get_name() << " "
        << student.get_last_name() << " равен: "
        << student.get_sred_ball() << endl;

    system("pause");
}