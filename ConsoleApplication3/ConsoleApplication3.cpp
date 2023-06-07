
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int x1, x2, y1, y2;
    cout << "Вевиде кодинату x1: " << endl;
    cin >> x1;
    cout << "Вевиде кодинату y1: " << endl;
    cin >> y1;
    cout << "Вевиде кодинату x2: " << endl;
    cin >> x2;
    cout << "Вевиде кодинату y2: " << endl;
    cin >> y2;
    if (x1 == x2) 
    {
        cout << "Линия параллельная оси Y";
    }
    else if (y1 == y2)
    {
        cout << "Линия параллельная оси X";
    }
    else 
    {
        cout << "Не параллельная ось X или ось Y";
    }
    
    cout << "\n\n\n\n";

    float x;
    cout << "Вевиде кодинату x1: " << endl;
    cin >> x;
    if (x - int(x) != 0)
    {
        cout << "Имеет вещественую часть";
    }
    else
    {
        cout << "Не имеет вещественую часть";
    }

    cout << "\n\n\n\n"; 

    int s, m, ch;
    cout << "Введите количестно часов";
    cin >> ch;
    cout << "Введите количестно минут";
    cin >> m;
    cout << "Введите количестно секунд";
    cin >> s;

    if (ch >= 0 && ch < 25  && m >= 0 && m < 60 && s >= 0 && s < 60)
    {
        cout << "Время не коректно";
    }
    else
    {
        cout << "Время коректно";
    }

    cout << "\n\n\n\n";

    
}

