#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    int i = 0;
    cout << "дни для анализа: ";
    cin >> N;
    double temps[31];
    double sum = 0;
    double avg;
    if (N > 31) {
        cout << "ограничение в 31 день, напиши число поменьше";
        return 0;
    }

    for (i; i < N; i++) {
        cout << "введите температуру за день " << i + 1 << ": ";
        cin >> temps[i];
    }

    for (int i = 0; i < N; i++) {
        sum += temps[i];
    }
    avg = sum / N;

    double min = temps[0];
    double max = temps[0];
    for (int i = 1; i < N; i++) {
        if (temps[i] < min)
            min = temps[i];
        if (temps[i] > max)
            max = temps[i];
    }

    int lmid = 0;
    for (int i = 0; i < N; i++) {
        if (temps[i] < avg)
            lmid++;
    }
    cout << endl;
    cout << "средняя температура: " << avg << endl;
    cout << "минимальная: " << min << endl;
    cout << "максимальная: " << max << endl;
    cout << "Ниже средней: " << lmid << endl;

    return 0;
}
