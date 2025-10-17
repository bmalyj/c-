#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr1[10];
    int arr2[10];

    int* p = arr1; 


    *p = 0; 
    *(p + 1) = 1;     

    for (int i = 2; i < SIZE; i++) {
        *(p + i) = *(p + i - 1) + *(p + i - 2);
    }

    cout << "array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    int sum = 0;
    int* q = arr1; 

    for (int i = 0; i < SIZE; i++) {
        sum += *(q + i);
    }
    cout << "sum :" << sum << endl;

    int min = *arr1;
    for (int i = 1; i < SIZE; i++) {
        if (*(arr1 + i) < min) {
            min = *(arr1 + i);
        }
    }
    cout << "min:" << min << endl;

    int* src = arr1;          
    int* dest = arr2 + SIZE - 1; 
    for (int i = 0; i < SIZE; i++) {
        *dest = *src;
        src++;
        dest--;
    }
    cout << "2 array(obratno)";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;

    return 0;
}
