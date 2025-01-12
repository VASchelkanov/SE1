#include <iostream>
#include "mycomplex.h"                                   // Подключаем заголовочный файл для работы с комплексными числами

using namespace std;

int main() {

    Complex A, B ( -4 ), C ( 23.0, 45.9 );               // Создаем три объекта класса Complex
    cout << A << ", " << B << ", " << C << endl;

    A = B + C;

    cout << "A = B + C, A = " << A << endl;              //Начало функций над комплексным числом

    Complex M = B - C;
    cout << "M = B - C, M = " << M << endl;
    cout << "M * A = " << M * A << endl;
    cout << "M / 4.45 = " << M / 4.45 << endl;

    Complex D;
    cout << "Enter complex number D = ";
    cin >> D;

    A += C + D;

    cout << "D = " << D << "\nA = " << A << endl;

    return 0;
}
                                                         //Конец функций над комплексным числом
