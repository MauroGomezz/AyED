#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float numerador = 4;
    float denominador = 1;
    double pi = 0;
    int operador = 1;
    for (int x = 0; x < 10000000; x++) {
        pi += operador * (numerador / denominador);
        denominador += 2; 
        operador *= -1;   
    }
    cout << setprecision(10);
    cout << pi;
}
