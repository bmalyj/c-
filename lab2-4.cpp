#include <iostream>
using namespace std;

void swapval(int a, int b) {
    a = b;
    b = a;
    cout << "swap value a =" << a << "b " << b << endl;
}
void swappointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "swap pointer *a = " << *a << " *b  " << *b << endl;
}
void swaplink(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    cout << " swwap link: a =" << a << ", b =" << b << endl;
}
int main() {
    int a = 5, b = 10;
    cout << "start with " << a << " " << b;
    swapval(a, b);
    cout << "result: a = " << a << ", b = " << b << endl;

    swappointer(&a, &b);
    cout << "result a = " << a << ", b = " << b << endl;

    swaplink(a, b);
    cout << "result^ a = " << a << ", b = " << b << endl;
    return 0;
}

