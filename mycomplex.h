#ifndef _MY_COMPLEX_H_                                           // Защита от повторного включения заголовочного файла

#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

class Complex {
    double Re;                                                    // Действительная часть комплексного числа
    double Im;                                                    // Мнимая часть комплексного числа

public:
    Complex ( double aRe = 0, double aIm = 0 );
    Complex ( const Complex & );
    ~Complex();

    void Set ( double aRe, double aIm = 0 );                      // Установка значений действительной и мнимой частей
    operator double();                                            // Оператор приведения к типу double (возвращает модуль комплексного числа)
    double abs();                                                 // Метод для вычисления модуля комплексного числа

    friend istream & operator >> ( istream &, Complex & );
    friend ostream & operator << ( ostream &, Complex & );

    Complex operator + ( const Complex & );
    Complex operator - ( const Complex & );
    Complex operator + ( const double & );

    friend Complex operator + ( const double &, const Complex & );

    Complex operator - ( const double & );

    friend Complex operator - ( const double &, const Complex & );

    Complex operator * ( const Complex & );
    Complex operator * ( const double & );

    friend Complex operator * ( const double &, const Complex & );

    Complex operator / (const double&);
    Complex & operator += ( const Complex & );
    Complex & operator -= ( const Complex & );
    Complex & operator *= ( const Complex & );
    Complex & operator += ( const double & );
    Complex & operator -= ( const double & );
    Complex & operator *= ( const double & );
    Complex & operator /= ( const double & );
    Complex & operator = ( const Complex & );
    Complex & operator = ( const double & );
};
                                                                    //Конец функций над комплексным числом

#endif                                                              // Завершение защиты от повторного включения
