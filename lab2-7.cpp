#include <iostream>
#include <string>
using namespace std;

struct date {

    int day;
    int month;
    int year;
};

struct Student {
    string name;
    date birth;
    int grades[5];

};

void printStudent(Student& s) {
    cout << "fio: " << s.name << endl;
    cout << "bithday: " << s.birth.day <<"."<< s.birth.month<<"." << s.birth.year << endl;
    cout << "grades: ";
    for (int i = 0; i < 5; i++) {
        cout << s.grades[i] << " ";
    }

    cout << endl;

}


double getAverageRating(Student& s) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s.grades[i];
    }
    return sum / 5;
}

int main() {
    Student group[4] = {
        {"Leha", {1, 2, 2000}, {5, 4, 5, 4, 5}},
        {"Bogdan", {12, 6, 2004}, {5, 4, 3, 4, 5}},
        {"Artem", {20, 8, 2001}, {5, 5, 5, 4, 5}},
        {"Alena", {15, 3, 2002}, {4, 4, 4, 2, 4}}
    };

    cout << "> 4:" << endl;

    for (int i = 0; i < 4; i++) {
        double avg = getAverageRating(group[i]);
        if (avg > 4) {
            printStudent(group[i]);
            cout << "avg " << avg << endl;
        }
    }

    return 0;
}
