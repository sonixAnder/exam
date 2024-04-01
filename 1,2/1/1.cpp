#include <iostream>
#include <limits>
using namespace std;

int main()
{

    bool a;
    double b;
    float c;
    int d;
    short i;
    long f;
    char g;

    //тип данных (1 задание)
    cout << "Names and type" << endl;
    cout << "Name: a. " << "Type: " << typeid(a).name() << endl;
    cout << "Name: b. " << "Type: " << typeid(b).name() << endl;
    cout << "Name: c. " << "Type: " << typeid(c).name() << endl;
    cout << "Name: i. " << "Type: " << typeid(i).name() << endl;
    cout << "Name: f. " << "Type: " << typeid(f).name() << endl;
    cout << "Name: g. " << "Type: " << typeid(g).name() << endl;
    cout << "-----------------------------------" << endl;

    //мин. и макс. значение (2 задание)
    cout << "min,max" << endl;
    cout << "a " << numeric_limits<bool>::min() << ", " << numeric_limits<bool>::max() << endl;
    cout << "b " << numeric_limits<double>::min() << ", " << numeric_limits<bool>::max() << endl;
    cout << "c " << numeric_limits<float>::min() << ", " << numeric_limits<bool>::max() << endl;
    cout << "d " << numeric_limits<int>::min() << ", " << numeric_limits<bool>::max() << endl;
    cout << "i " << numeric_limits<short>::min() << ", " << numeric_limits<bool>::max() << endl;
    cout << "f " << numeric_limits<long>::min() << ", " << numeric_limits<bool>::max() << endl;
    cout << "g " << numeric_limits<char>::min() << ", " << numeric_limits<bool>::max() << endl;
}


//типов bool, double, float, int, short, long, char