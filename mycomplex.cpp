/*!
    @file mycomplex.cpp
    @brief  Файл с описанием методов класса Complex
*/
#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;
/*!
    @brief  Заголовочный файл
    @param a_Re Действительная состовляющая
    @param a_Ie Мнимая состовляющая
*/
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}
/*!
    @brief  Конструктор класса
    @param complex_num Комплексное число
*/
Complex ::  Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}
/*!
    @brief  Деструктор класса
*/
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}
/*!
    @brief Устанавливает новые значения для действительной и мнимой частей
    @param aRe Новое значение действительной части
    @param aIm Новое значение мнимой части
*/
void Complex::Set(double aRe,double aIm) {
    Re = aRe;
    Im = aIm;
}
/*!
    @brief  Оператор приведения к типу double, возвращает модуль комплексного числа
    @return Модуль комплексного числа
*/
Complex::operator double() {

    return abs();
}
/*!
    @brief  Возвращает модуль комплексного числа
    @return Модуль комплексного числа
*/
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}
/*!
    @brief Оператор сложения двух комплексных чисел
    @param aRval Комплексное число, которое будет добавлено
    @return Результат сложения (новое комплексное число)
*/
Complex Complex::operator+(const Complex& aRval) {
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}
/*!
    @brief Оператор вычитания двух комплексных чисел
    @param aRval Комплексное число, которое будет вычтено
    @return Результат вычитания (новое комплексное число)
*/
Complex Complex::operator-(const Complex& aRval) {
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}
/*!
    @brief Оператор сложения комплексного числа с действительным числом
    @param aRval Действительное число, которое будет добавлено
    @return Результат сложения (новое комплексное число)
*/
Complex Complex::operator+(const double& aRval) {
    Complex result;
    result.Re = Re + aRval;
    result.Im = Im;
    return result;
}
/*!
    @brief Оператор вычитания действительного числа из комплексного
    @param aRval Действительное число, которое будет вычтено
    @return Результат вычитания (новое комплексное число)
*/
Complex Complex::operator-(const double& aRval) {
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}
/*!
    @brief Оператор умножения двух комплексных чисел
    @param aRval Комплексное число, на которое будет произведено умножение
    @return Результат умножения (новое комплексное число)
*/
Complex Complex::operator*(const Complex& aRval) {
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}
/*!
    @brief Оператор умножения комплексного числа на действительное число
    @param aRval Действительное число, на которое будет произведено умножение
    @return Результат умножения (новое комплексное число)
*/
Complex Complex::operator*(const double& aRval) {
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}
/*!
    @brief Оператор деления комплексного числа на действительное число
    @param aRval Действительное число, на которое будет произведено деление
    @return Результат деления (новое комплексное число)
*/
Complex Complex::operator/(const double& aRval) {
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}
/*!
    @brief Составной оператор сложения с комплексным числом
    @param aRval Комплексное число, которое будет добавлено
    @return Ссылка на текущий объект
*/
Complex& Complex::operator+=(const Complex& aRval) {
    Re += aRval.Re;
    Im += aRval.Im;
    return *this;
}
/*!
    @brief Составной оператор вычитания комплексного числа
    @param aRval Комплексное число, которое будет вычтено
    @return Ссылка на текущий объект
*/
Complex& Complex::operator-=(const Complex& aRval) {
    Re -= aRval.Re;
    Im -= aRval.Im;
    return *this;
}
/*!
    @brief Составной оператор умножения на комплексное число
    @param aRval Комплексное число, на которое будет произведено умножение
    @return Ссылка на текущий объект
*/
Complex& Complex::operator*=(const Complex& aRval) {
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}
/*!
    @brief Составной оператор сложения с действительным числом
    @param aRval Действительное число, которое будет добавлено
    @return Ссылка на текущий объект
*/
Complex& Complex::operator+=(const double& aRval) {
    Re += aRval;
    return *this;
}
/*!
    @brief Составной оператор вычитания действительного числа
    @param aRval Действительное число, которое будет вычтено
    @return Ссылка на текущий объект
*/
Complex& Complex::operator-=(const double& aRval) {
    Re -= aRval;
    return *this;
}
/*!
    @brief Составной оператор умножения на действительное число
    @param aRval Действительное число, на которое будет произведено умножение
    @return Ссылка на текущий объект
*/
Complex& Complex::operator*=(const double& aRval) {
    Re *= aRval;
    Im *= aRval;
    return *this;
}
/*!
    @brief Составной оператор деления на действительное число
    @param aRval Действительное число, на которое будет произведено деление
    @return Ссылка на текущий объект
*/
Complex& Complex::operator/=(const double& aRval) {
    Re /= aRval;
    Im /= aRval;
    return *this;
}
/*!
    @brief Оператор присваивания для комплексного числа
    @param aRval Комплексное число, которое будет присвоено
    @return Ссылка на текущий объект
*/
Complex& Complex::operator=(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}
/*!
    @brief Оператор присваивания для действительного числа
    @param aRval Действительное число, которое будет присвоено
    @return Ссылка на текущий объект
*/
Complex& Complex::operator=(const double& aRval) {
    Re = aRval;
    Im = 0.0;
    return *this;
}
/*!
    @brief Оператор ввода для комплексного числа
    @param stream Поток ввода
    @param a Комплексное число, в которое будет записан результат
    @return Поток ввода
*/
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}
/*!
    @brief Оператор вывода для комплексного числа
    @param stream Поток вывода
    @param a Комплексное число, которое будет выведено
    @return Поток вывода
*/
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) stream << '+';
    stream << a.Im << 'i';
    return stream;
}
/*!
    @brief Оператор сложения действительного числа и комплексного
    @param aLval Действительное число
    @param aRval Комплексное число
    @return Результат сложения (новое комплексное число)
*/
Complex operator+(const double& aRval, const Complex& aRval) {
    Complex Result;
    Result.Re= aLval+aRval.Re;
    Result. Im=  aRval.Im;
    return Result;
}
/*!
    @brief Оператор вычитания комплексного числа из действительного
    @param aLval Действительное число
    @param aRval Комплексное число
    @return Результат вычитания (новое комплексное число)
*/
Complex operator-(const double& aRval, const Complex& aRval) {
    Complex Result;
    Result.Re = aRval - aRval.Re;
    Result.Im = -aRval.Im;
    return Result;
}
/*!
    @brief Оператор умножения действительного числа на комплексное
    @param aLval Действительное число
    @param a Комплексное число
    @return Результат умножения (новое комплексное число)
*/
Complex operator*(const double& aRval, const Complex& a) {
    Complex r;
    r.Re =aRval * a.Re;
    r.Im =aRval * a.Im;
    return r;
}
