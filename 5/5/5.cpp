#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");

    array<string, 5> students = { "Владислав", "Алексей", "Мария", "Ольга", "Евгений" }; //менять на своё усмотрение
    array<string, 5> grades = { "кол", "неудовлетворительно", "удовлетворительно", "хорошо", "отлично" }; //менять на своё усмотрение


    for (int i = 0; i < students.size(); ++i)
    {
        cout << "Студент " << students[i] << ". Оценка: ";
        switch (i + 1)
        {
        case 1:
        {
            cout << grades[0]; break;
        }

        case 2:
        {
            cout << grades[1]; break;
        }

        case 3:
        {
            cout << grades[2]; break;
        }

        case 4:
        {
            cout << grades[3]; break;
        }

        case 5:
        {
            cout << grades[4]; break;
        }

        default:
        {
            cout << "ошибка"; break;
        }
        }
        cout << endl;
    }

    return 0;
}
