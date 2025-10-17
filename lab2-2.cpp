
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000;
    char str[SIZE];

    cout << "paste the line ";
    cin.getline(str, SIZE);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "lenght: " << length << endl;

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "reversed:" << str << endl;

    char ch;
    cout << "symbol to find:";
    cin >> ch;
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    cout << "stolko raz simvol bil: " << count << endl;
    return 0;
}
