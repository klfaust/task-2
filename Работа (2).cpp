#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");

    int season;
    cout << "Выбери время года: \n[1] Зима \n[2] Весна \n[3] Лето \n[4] Осень \n";
    cin >> season;
    if (season == 1)
    {
        cout << "Сейчас зима. Надевай пуховичок, шапочку, шарфик, холодно же!";
    }
    else if (season == 2)
    {
        cout << "Сейчас весна. Надевай самое красивое пальто и иди гонять котов)))";
    }
    else if (season == 3)
    {
        cout << "Сейчас лето. Хочеца пакупаца...";
    }
    else if(season == 4)
    {
        cout << "Сейчас осень. Время субботника.............";
    }
    else
    {
        cout << "Нет такого времени года!";
    }

    return 0;
}