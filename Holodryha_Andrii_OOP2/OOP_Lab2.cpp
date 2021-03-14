#include <iostream>
using namespace std;

class Data {
private:
    int* day;
    int* month;
    int* year;


public:
    //�����������
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
    //����������� ��������� 
    Data(const Data& obj)

    {

        this->day = new int;
        this->day = obj.day;

        this->month = new int;
        this->month = obj.day;

        this->year = new int;
        this->year = obj.day;



    }
    //����������
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
    {"�i����"},
    {"�����"},
    {"��������"},
    {"��i����"},
    {"�������"},
    {"�������"},
    {"������"},
    {"�������"},
    {"��������"},
    {"�������"},
    {"��������"},
    {"�������"},
        };

        cout << *day << " ";

        cout << months[*month] << " ";

        cout << *year << " �.\n";


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
    //������� ���������� ������� ��� , ����� � ����.
    int Getday() { return *day; }
    int Getmonth() { return *month; }
    int Getyear() { return *year; }

    //������� ���� ����
    void Setday() {
        setlocale(LC_ALL, "Ukrainian");
        int newday;
        cout << "����i�� ����(�i� 1 �� 31)\n";
        cin >> newday;
        if (newday >= 0 && newday <= 31) {
            *day = newday;
        }
        else cout << "Wrong data\n";
    }
    void Setmonth() {
        setlocale(LC_ALL, "Ukrainian");
        int newmonth;
        cout << "����i�� �i���� (�i� 1 �� 12)\n";
        cin >> newmonth;
        if (newmonth >= 1 && newmonth < 13) {
            *month = newmonth;
        }
        else cout << "Wrong data\n";
    }
    void Setyear() {
        setlocale(LC_ALL, "Ukrainian");
        int newyear;
        cout << "����i�� �i�\n";
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
    cout << "����i�! \n ���i����:\n 1 -> ���������� ���� ����\n 2 -> �������� ����\n 0 -> ���i�\n";
    do {
        cout << "����i�� ����� ����i��� ���i�\n";
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