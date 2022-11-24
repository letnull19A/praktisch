#include <iostream>

using namespace ::std;

struct User
{
    char Name[100];
    int Age;
    string FavAnime;
    string FavProgLang;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    User user{};
    strcpy_s(user.Name, "Лёша");

    user.Age = 18;
    user.FavAnime = "Наруто";
    user.FavProgLang = "C#, Typescript";

    cout << "Меня зовут: " << user.Name << "\nмне " << user.Age << " лет\nЛюбимое аниме: " << user.FavAnime << "\nЛюбимый ЯП: " << user.FavProgLang << endl;

    system("pause");

}