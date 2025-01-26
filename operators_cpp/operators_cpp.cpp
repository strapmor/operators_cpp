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

void task4() {
    int x;
    cout << "Введите номер достоинства карты: ";
    cin >> x;

    switch (x) {
    case 6:
        cout << "Это шестёрка";
        break;
    case 7:
        cout << "Это семёрка";
        break;
    case 8:
        cout << "Это восьмерка";
        break;
    case 9:
        cout << "Это девятка";
        break;
    case 10:
        cout << "Это десятка";
        break;
    case 11:
        cout << "Это валет";
        break;
    case 12:
        cout << "Это дама";
        break;
    case 13:
        cout << "Это король";
        break;
    case 14:
        cout << "Это туз";
        break;
    default:
        cout << "Такой карты нет";
        break;
    }
    cout << endl;
}

void task5() {
    int x;
    cout << "Введите номер масти: ";
    cin >> x;
    int y;
    cout << "Введите номер достоинства карты: ";
    cin >> y;
    string suit, value;

    switch (x) {
    case 1:
        suit = "пик";
        break;
    case 2:
        suit = "треф";
        break;
    case 3:
        suit = "бубен";
        break;
    case 4:
        suit = "черв";
        break;
    default:
        return;
    }
    switch (y) {
    case 6:
        value = "шестёрка";
        break;
    case 7:
        value = "семёрка";
        break;
    case 8:
        value = "восьмерка";
        break;
    case 9:
        value = "девятка";
        break;
    case 10:
        value = "десятка";
        break;
    case 11:
        value = "валет";
        break;
    case 12:
        value = "дама";
        break;
    case 13:
        value = "король";
        break;
    case 14:
        value = "туз";
        break;
    default:
        return;
    }
    
    cout << "Это " << value << " " << suit << endl;
}

void task6() {

}

int main()
{
    setlocale(LC_ALL, "rus");
    //task1and2();
    //task3();
    //task4();
    task5();


    system("pause");
}
