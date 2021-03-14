#include <iostream>
using namespace std;

class Data {
private:
    int* day;
    int* month;
    int* year;


public:
    //Конструктор
    Data() {
        day = new int;
        month = new int;
        year = new int;
        *day = *month = *year = 0;
    }

    Data(int userday, int usermonth, int useryear)
    {
        this->day = new int;
        this->month = new int;
        this->year = new int;

        *day = userday;
        *month = usermonth;
        *year = useryear;

    }
    //Конструктор копіювання 
    Data(const Data& obj)

    {

        this->day = new int;
        this->day = obj.day;

        this->month = new int;
        this->month = obj.day;

        this->year = new int;
        this->year = obj.day;



    }
    //Деструктор
    ~Data() {
        delete[] day;
        delete[] month;
        delete[] year;

    }
    // Data print function
    void ShowData() {
        setlocale(LC_ALL, "Ukrainian");
        string  months[13] = {
    {"Error 404"},
    {"Сiчень"},
    {"Лютий"},
    {"Березень"},
    {"Квiтень"},
    {"Травень"},
    {"Червень"},
    {"Липень"},
    {"Серпень"},
    {"Вересень"},
    {"Жовтень"},
    {"Листопад"},
    {"Грудень"},
        };

        cout << *day << " ";

        cout << months[*month] << " ";

        cout << *year << " р.\n";


        if (*day < 10) {
            cout << '0';
        }
        cout << *day << ".";

        if (*month < 9) {
            cout << '0';
        }
        cout << *month << ".";

        cout << *year << endl;

    }
    //Функції повернення значень дня , місяця і року.
    int Getday() { return *day; }
    int Getmonth() { return *month; }
    int Getyear() { return *year; }

    //Функції зміни дати
    void Setday() {
        setlocale(LC_ALL, "Ukrainian");
        int newday;
        cout << "Введiть день(вiд 1 до 31)\n";
        cin >> newday;
        if (newday >= 0 && newday <= 31) {
            *day = newday;
        }
        else cout << "Wrong data\n";
    }
    void Setmonth() {
        setlocale(LC_ALL, "Ukrainian");
        int newmonth;
        cout << "Введiть мiсяць (вiд 1 до 12)\n";
        cin >> newmonth;
        if (newmonth >= 1 && newmonth < 13) {
            *month = newmonth;
        }
        else cout << "Wrong data\n";
    }
    void Setyear() {
        setlocale(LC_ALL, "Ukrainian");
        int newyear;
        cout << "Введiть рiк\n";
        cin >> newyear;
        if (newyear >= 0 && newyear < 9999) {
            *year = newyear;
        }
        else cout << "Wrong data\n";

    }
};

int main() {
    int choice;
    Data Data1;
    Data Data2(02, 03, 2021);
    setlocale(LC_ALL, "Ukrainian");
    cout << "Привiт! \n Варiанти:\n 1 -> Встановити нову дату\n 2 -> Показати дату\n 0 -> Вихiд\n";
    do {
        cout << "Введiть номер потрiбної опцiї\n";
        cin >> choice;
        switch (choice) {
        case 1:Data1.Setday();
            Data1.Setmonth();
            Data1.Setyear();
            break;

        case 2: Data1.ShowData();
        }
    } while (choice != 0);

    return 0;
}