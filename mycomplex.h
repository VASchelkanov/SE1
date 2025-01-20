/*!
    @file mycomplex.h
    @brief  Заголовочный файл
*/

#ifndef _MY_COMPLEX_H_

#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

/*!
    @brief  Класс комплексного числа
*/
class Complex {

/*!

    @brief  Действительная часть комплексного числа
*/
    double Re;

/*!
    @brief  Мнимая часть комплексного числа
*/
    double Im;

public:
    Complex ( double aRe = 0, double aIm = 0 );
    Complex ( const Complex & );
    ~Complex();
/*!
    @brief  Установка значений комплексных чисел
*/
    void Set ( double aRe, double aIm = 0 );
    operator double();
/*!
    @brief  Метод для вычисления модуля комплексного числа
*/
    double abs();
    /*!
        @brief  Перегрузка оператора ввода.
        @param  in  Поток ввода.
        @param  c  Комплексное число, в которое будет произведен ввод.
        @return Поток ввода.
    */
    friend istream & operator >> ( istream &, Complex & );
    /*!
        @brief  Перегрузка оператора вывода.
        @param  out  Поток вывода.
        @param  c  Комплексное число, которое будет выведено.
        @return Поток вывода.
    */
    friend ostream & operator << ( ostream &, Complex & );
    /*!
        @brief  Перегрузка оператора сложения для двух комплексных чисел.
        @param  other  Комплексное число, которое будет добавлено.
        @return Результат сложения.
    */
    Complex operator + ( const Complex & );
    /*!
        @brief  Перегрузка оператора вычитания для двух комплексных чисел.
        @param  other  Комплексное число, которое будет вычтено.
        @return Результат вычитания.
    */
    Complex operator - ( const Complex & );
    /*!
        @brief  Перегрузка оператора сложения для комплексного числа и числа типа double.
        @param  value  Число типа double, которое будет добавлено.
        @return Результат сложения.
    */
    Complex operator + ( const double & );
    /*!
        @brief  Перегрузка оператора сложения для числа типа double и комплексного числа.
        @param  value  Число типа double.
        @param  other  Комплексное число.
        @return Результат сложения.
    */
    friend Complex operator + ( const double &, const Complex & );
    /*!
        @brief  Перегрузка оператора вычитания для комплексного числа и числа типа double.
        @param  value  Число типа double, которое будет вычтено.
        @return Результат вычитания.
    */
    Complex operator - ( const double & );
    /*!
        @brief  Перегрузка оператора вычитания для числа типа double и комплексного числа.
        @param  value  Число типа double.
        @param  other  Комплексное число.
        @return Результат вычитания.
    */
    friend Complex operator - ( const double &, const Complex & );
    /*!
        @brief  Перегрузка оператора умножения для двух комплексных чисел.
        @param  other  Комплексное число, на которое будет произведено умножение.
        @return Результат умножения.
    */
    Complex operator * ( const Complex & );
    /*!
        @brief  Перегрузка оператора умножения для комплексного числа и числа типа double.
        @param  value  Число типа double, на которое будет произведено умножение.
        @return Результат умножения.
    */
    Complex operator * ( const double & );
    /*!
        @brief  Перегрузка оператора умножения для числа типа double и комплексного числа.
        @param  value  Число типа double.
        @param  other  Комплексное число.
        @return Результат умножения.
    */

    friend Complex operator * ( const double &, const Complex & );
    /*!
        @brief  Выполнение операций над комплексным числом
    */
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

#endif
