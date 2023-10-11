#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S = 1;
    int i, k;

    // Версія 1: Використання while циклу
    i = 1;
    while (i <= 15) {
        double P = 0;
        k = 1;
        while (k <= i) {
            P += sqrt(k);
            k++;
        }
        S *= (sin(10 * i) * cos(10 * i)) / (P * sqrt(i));
        i++;
    }
    cout << " 1: " << S << endl;

    // Версія 2: Використання do-while циклу
    S = 1;
    i = 1;
    do {
        double P = 0;
        k = 1;
        do {
            P += sqrt(k);
            k++;
        } while (k <= i);
        S *= (sin(10 * i) * cos(10 * i)) / (P * sqrt(i));
        i++;
    } while (i <= 15);
    cout << " 2: " << S << endl;

    // Версія 3: Використання for циклу
    S = 1;
    for (i = 1; i <= 15; i++) {
        double P = 0;
        for (k = 1; k <= i; k++) {
            P += sqrt(k);
        }
        S *= (sin(10 * i) * cos(10 * i)) / (P * sqrt(i));
    }
    cout << " 3: " << S << endl;

    // Версія 4: Використання for циклу в зворотньому порядку
    S = 1;
    for (i = 15; i >= 1; i--) {
        double P = 0;
        for (k = i; k >= 1; k--) {
            P += sqrt(k);
        }
        S *= (sin(10 * i) * cos(10 * i)) / (P * sqrt(i));
    }
    cout << " 4: " << S << endl;

    return 0;
}
