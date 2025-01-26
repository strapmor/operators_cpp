#include <iostream>
using namespace std;

void task1and2() {
    //Первое и второе задание
    int x, day;
    cout << "Введите порядковый номер месяца: ";
    cin >> x;
    cout << "Введите порядковый номер дня месяца: ";
    cin >> day;

    string month;
    int days_count = 0;
    switch (x) {
    case 1:
        month = "Январь";
        days_count = 31;
        break;
    case 2:
        month = "Февраль";
        days_count = 28;
        break;
    case 3:
        month = "Март";
        days_count = 31;
        break;
    case 4:
        month = "Апрель";
        days_count = 30;
        break;
    case 5:
        month = "Май";
        days_count = 31;
        break;
    case 6:
        month = "Июнь";
        days_count = 30;
        break;
    case 7:
        month = "Июль";
        days_count = 31;
        break;
    case 8:
        month = "Август";
        days_count = 31;
        break;
    case 9:
        month = "Сентябрь";
        days_count = 30;
        break;
    case 10:
        month = "Октябрь";
        days_count = 31;
        break;
    case 11:
        month = "Ноябрь";
        days_count = 30;
        break;
    case 12:
        month = "Декабрь";
        days_count = 31;
        break;
    default:
        month = "Такого месяца нет";
        break;
    }
    cout << month << endl;
    cout << "До конца месяца осталось: " << days_count - day << endl;
}

void task3() {
    int x;
    cout << "Введите номер масти: ";
    cin >> x;

    switch (x) {
    case 1:
        cout << "Это пики";
        break;
    case 2:
        cout << "Это трефы";
        break;
    case 3:
        cout << "Это бубны";
        break;
    case 4:
        cout << "Это червы";
        break;
    default:
        cout << "Такой масти нет";
        break;
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    //task1and2();
    task3();


    system("pause");
}
