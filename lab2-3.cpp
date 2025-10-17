#include <iostream>
using namespace std;


struct Complex {
    double real;
    double imag;
};
Complex sum(Complex a, Complex b) {
    Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}
Complex minusi(Complex a, Complex b) {
    Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}
Complex ymno(Complex a, Complex b) {
    Complex r;
    r.real = a.real * b.real - a.imag * b.imag;
    r.imag = a.real * b.imag + a.imag * b.real;
    return r;
}
void print(Complex c) {
    cout << c.real << " + " << c.imag << "i";
}
int main() {
    Complex a, b, result;
    cout << "первое число";
    cin >> a.real >> a.imag;
    cout << "второе число";
    cin >> b.real >> b.imag;
    result = sum(a, b);
    cout << "сумма:";
    print(result);
    cout << endl;

    result = minusi(a, b);
    cout << "разность: ";
    print(result);
    cout << endl;

    result = ymno(a, b);
    cout << "произведение: ";
    print(result);
    cout << endl;
    return 0;
}
