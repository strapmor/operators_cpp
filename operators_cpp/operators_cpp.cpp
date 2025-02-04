﻿#include <iostream>
#include <Windows.h>
#include <ctime>
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
    cout << "Введите число месяцев с 1 января 1990 года: ";
    int count, x;
    cin >> count;
    x = (count % 12) + 1;
    string month;
    switch (x) {
    case 1:
        month = "Январь";
        break;
    case 2:
        month = "Февраль";
        break;
    case 3:
        month = "Март";
        break;
    case 4:
        month = "Апрель";
        break;
    case 5:
        month = "Май";
        break;
    case 6:
        month = "Июнь";
        break;
    case 7:
        month = "Июль";
        break;
    case 8:
        month = "Август";
        break;
    case 9:
        month = "Сентябрь";
        break;
    case 10:
        month = "Октябрь";
        break;
    case 11:
        month = "Ноябрь";
        break;
    case 12:
        month = "Декабрь";
        break;
    }

    cout << "Сейчас " << month << endl;
}

void task7() {
    cout << "Расписание\nВрач:\tШпак А. С.\nВведите день недели (Понедельник, ПН и т.п.): ";

    while (true) {
        string day;
        cin >> day;

        //Преобразование строки в нижний регистр
        for (int i = 0; day[i] != '\0'; i++) {
            day[i] = tolower(day[i]);
        }

        if (day == "понедельник" || day == "пн")
            cout << "Расписание на понедельник:\n\t8:30-16:30\n\t12:00-12:30 - перерыв";

        else if (day == "вторник" || day == "вт")
            cout << "Расписание на вторник:\n\t8:30-16:30\n\t12:00-12:30 - перерыв";

        else if (day == "среда" || day == "ср")
            cout << "Расписание на среду:\n\t8:30-16:30\n\t12:00-12:30 - перерыв";

        else if (day == "четверг" || day == "чт")
            cout << "Расписание на четверг:\n\t8:30-16:30\n\t12:00-12:30 - перерыв";

        else if (day == "пятница" || day == "пт")
            cout << "Расписание на пятницу:\n\t8:30-16:30\n\t12:00-12:30 - перерыв";

        else if (day == "суббота" || day == "сб")
            cout << "Расписание на субботу:\n\tВЫХОДНОЙ";

        else if (day == "воскресенье" || day == "вс")
            cout << "Расписание на воскресенье:\n\tВЫХОДНОЙ";

        else {
            cout << "Введённый месяц не найден\nВозможно опечатка, попробуйте снова: ";
            continue;
        }
        cout << endl;
        break;
    }
}

void task8() {
    int x;
    cout << "Введите количество набранных баллов: ";
    cin >> x;

    if (x >= 90 && x <= 100) {
        cout << "Оценка: отлично";
    }
    else if (x >= 70 && x <= 89)
        cout << "Оценка: хорошо";
    else if (x >= 50 && x <= 69)
        cout << "Оценка: удовлетворительно";
    else if(x >= 0 && x <= 49)
        cout << "Оценка: неудовлетворительно";
    else
        cout << "Ты, по-моему, перепутал";
    cout << endl;
}

void task9() {
    double a, b;
    char op;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    default:
        cout << "Нет такой операции" << endl;
        break;
    }
}

void task10() {
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (year >= 4)
        year = (year - 4) % 12;
    else
        year = (year + 8) % -12;


    switch (year) {
    case 0:
        cout << "Это год крысы" << endl;
        break;
    case 1:
        cout << "Это год быка" << endl;
        break;
    case 2:
        cout << "Это год тигра" << endl;
        break;
    case 3:
        cout << "Это год кролика" << endl;
        break;
    case 4:
        cout << "Это год дракона" << endl;
        break;
    case 5:
        cout << "Это год змеи" << endl;
        break;
    case 6:
        cout << "Это год лошади" << endl;
        break;
    case 7:
        cout << "Это год овцы" << endl;
        break;
    case 8:
        cout << "Это год обезьяны" << endl;
        break;
    case 9:
        cout << "Это год петуха" << endl;
        break;
    case 10:
        cout << "Это год собаки" << endl;
        break;
    case 11:
        cout << "Это год свиньи" << endl;
        break;
    default:
        cout << "Нет такого года" << endl;
        break;
    }
}

void task11() {
    int age;
    cout << "Введите возраст: ";
    cin >> age;

    if (age < 0)
        cout << "Отрицательного возраста не бывает" << endl;
    else if (age == 0 || age == 1)
        cout << "Младенец" << endl;
    else if (age > 1 && age <= 11)
        cout << "Ребёнок" << endl;
    else if (age >= 12 && age <= 15)
        cout << "Подросток" << endl;
    else if (age >= 16 && age <= 25)
        cout << "Юноша" << endl;
    else if (age >= 26 && age <= 70)
        cout << "Мужчина" << endl;
    else if (age >= 70)
        cout << "Пожилой человек" << endl;
}

void task12() {
    srand(time(NULL));
    int rnd = rand() % 5;
    string men[6] = {"Иван", "Евгений", "Сергей", "Дмитрий", "Артём", "Григорий"};
    string women[6] = { "Анна", "Яна", "Екатерина", "Валерия", "Анастасия", "Алиса"};

    cout << "Какой пол? (м/ж): ";
    char gender;
    cin >> gender;

    switch (gender) {
    case 'м':
        cout << "Возможное имя пола: " << men[rnd] << endl;
        break;
    case 'ж':
        cout << "Возможное имя пола: " << women[rnd] << endl;
        break;
    default:
        cout << "Такого пола нет" << endl;
        break;
    }
}

void task13() {
    cout << "Выберите тип транспорта (а - автомобиль, в - велосипед, м - мотоцикл, с - самолёт, п - поезд): ";
    char vehicle;
    cin >> vehicle;

    switch (vehicle) {
    case 'а':
        cout << "Максимальная скорость: 110км/ч" << endl;
        break;
    case 'в':
        cout << "Максимальная скорость: 110км/ч" << endl;
        break;
    case 'м':
        cout << "Максимальная скорость: 110км/ч" << endl;
        break;
    case 'с':
        cout << "Максимальная скорость: 600км/ч" << endl;
        break;
    case 'п':
        cout << "Максимальная скорость: 200км/ч" << endl;
        break;

    default:
        cout << "Такого транспорта нет" << endl;
        break;
    }
}

void task14() {
    cout << "Введите номер телевизионного канала (от 1 до 5): ";
    int channel;
    cin >> channel;

    switch (channel) {
    case 1:
        cout << "Популярные программы канала:\nПоле чудес\nЧто? Где? Когда?"<<endl;
        break;
    case 2:
        cout << "Популярные программы канала:\nКухня\nПусть говорят" << endl;
        break;
    case 3:
        cout << "Популярные программы канала:\nДавай поженимся\nМужское-женское" << endl;
        break;
    case 4:
        cout << "Популярные программы канала:\nКривой кефир\nПроСТО кухня" << endl;
        break;
    case 5:
        cout << "Популярные программы канала:\nComedy club\nУральские пельмени" << endl;
        break;
    }
}

void give_op(string s, string p) {
    bool selected = false;
    cout << "Что вы хотите вывести? (s - площадь, p - периметр): ";
    while (!selected) {
        char op;
        cin >> op;
    
        switch (op) {
        case 's':
            cout << "s = " << s << endl;
            selected = true;
            break;
        case 'p':
            cout << "p = " << p << endl;
            selected = true;
            break;
        default:
            cout << "Такого параметра нет, попробуйте снова: " << endl;
            break;
        }
    }
}

void task15() {
    char fig;
    string s, p;
    cout << "Введите фигуру (к - круг, п - прямоугольник, т - треугольник): ";
    bool selected = false;
    while (!selected) {
        cin >> fig;
        
        switch (fig) {
        case 'к':
            s = "πr^2";
            p = "2πr";
            selected = true;
            break;
        case 'п':
            s = "ab";
            p = "a*2+b*2";
            selected = true;
            break;
        case 'т':
            s = "1/2ab";
            p = "abc";
            selected = true;
            break;
        default:
            cout << "Такой фигуры нет, попробуйте снова: ";
            continue;
        }
    }
    give_op(s, p);
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "rus");

    //task1and2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    task15();


    system("pause");
}
