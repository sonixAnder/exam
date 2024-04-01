#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num_points;

    cout << "Введите количество точек: ";
    cin >> num_points;

    vector<pair<int, int>> points(num_points);

    for (int i = 0; i < num_points; i++)
    {
        cout << "Введите координаты точки " << i + 1 << ": ";
        cin >> points[i].first >> points[i].second;
    }

    for (int i = 0; i < num_points; i++)
    {
        int x = points[i].first;
        int y = points[i].second;
        string quarter;

        if (x > 0 && y > 0)
        {
            quarter = "первой";
        }
        else if (x < 0 && y > 0)
        {
            quarter = "второй";
        }
        else if (x < 0 && y < 0)
        {
            quarter = "третьей";
        }
        else if (x > 0 && y < 0)
        {
            quarter = "четвертой";
        }


        cout << "Точка с координатами X = " << x << " и Y = " << y << " лежит в " << quarter << " координатной четверти" << endl;
    }

    return 0;
}