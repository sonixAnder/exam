#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int age;

    string messages[] =
    {
        "Рано ещё тебе паспорт получать, жди своего 14-летия. Увы",
        "Есть паспорт: да.\nУ вас паспорт, выдаваемый в 14 лет.\n",
        "Есть паспорт: да.\n",
        "Обновляли паспорт (да/нет): ",
        "У вас паспорт, выдаваемый в 20 лет.\n",
        "У вас паспорт, выдаваемый в 45 лет.\n",
        "У вас паспорт 14-летнего возраста. Рекомендуется заменить паспорт.\n",
        "У вас паспорт 20-летнего возраста. Рекомендуется заменить паспорт.\n"
    };

    cout << "Введите ваш возраст: ";
    cin >> age;

    if (age < 14)
    {
        cout << messages[0];
    }
    else
    {
        string updated;
        cout << messages[2];
        if (age >= 20)
        {
            cout << messages[3];
            cin >> updated;
            if (age >= 45)
            {
                if (updated == "да")
                {
                    cout << messages[4];
                }
                else
                {
                    cout << messages[5];
                }
            }
            else if (age >= 20)
            {
                if (updated == "да")
                {
                    cout << messages[5];
                }
                else
                {
                    cout << messages[4];
                }
            }
        }
        else
        {
            cout << messages[1];
        }
    }

    return 0;
}