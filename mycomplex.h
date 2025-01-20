/*!
    @file mycomplex.h
    @brief  ������������ ����
*/

#ifndef _MY_COMPLEX_H_

#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

/*!
    @brief  ����� ������������ �����
*/
class Complex {

/*!

    @brief  �������������� ����� ������������ �����
*/
    double Re;

/*!
    @brief  ������ ����� ������������ �����
*/
    double Im;

public:
    Complex ( double aRe = 0, double aIm = 0 );
    Complex ( const Complex & );
    ~Complex();
/*!
    @brief  ��������� �������� ����������� �����
*/
    void Set ( double aRe, double aIm = 0 );
    operator double();
/*!
    @brief  ����� ��� ���������� ������ ������������ �����
*/
    double abs();
    /*!
        @brief  ���������� ��������� �����.
        @param  in  ����� �����.
        @param  c  ����������� �����, � ������� ����� ���������� ����.
        @return ����� �����.
    */
    friend istream & operator >> ( istream &, Complex & );
    /*!
        @brief  ���������� ��������� ������.
        @param  out  ����� ������.
        @param  c  ����������� �����, ������� ����� ��������.
        @return ����� ������.
    */
    friend ostream & operator << ( ostream &, Complex & );
    /*!
        @brief  ���������� ��������� �������� ��� ���� ����������� �����.
        @param  other  ����������� �����, ������� ����� ���������.
        @return ��������� ��������.
    */
    Complex operator + ( const Complex & );
    /*!
        @brief  ���������� ��������� ��������� ��� ���� ����������� �����.
        @param  other  ����������� �����, ������� ����� �������.
        @return ��������� ���������.
    */
    Complex operator - ( const Complex & );
    /*!
        @brief  ���������� ��������� �������� ��� ������������ ����� � ����� ���� double.
        @param  value  ����� ���� double, ������� ����� ���������.
        @return ��������� ��������.
    */
    Complex operator + ( const double & );
    /*!
        @brief  ���������� ��������� �������� ��� ����� ���� double � ������������ �����.
        @param  value  ����� ���� double.
        @param  other  ����������� �����.
        @return ��������� ��������.
    */
    friend Complex operator + ( const double &, const Complex & );
    /*!
        @brief  ���������� ��������� ��������� ��� ������������ ����� � ����� ���� double.
        @param  value  ����� ���� double, ������� ����� �������.
        @return ��������� ���������.
    */
    Complex operator - ( const double & );
    /*!
        @brief  ���������� ��������� ��������� ��� ����� ���� double � ������������ �����.
        @param  value  ����� ���� double.
        @param  other  ����������� �����.
        @return ��������� ���������.
    */
    friend Complex operator - ( const double &, const Complex & );
    /*!
        @brief  ���������� ��������� ��������� ��� ���� ����������� �����.
        @param  other  ����������� �����, �� ������� ����� ����������� ���������.
        @return ��������� ���������.
    */
    Complex operator * ( const Complex & );
    /*!
        @brief  ���������� ��������� ��������� ��� ������������ ����� � ����� ���� double.
        @param  value  ����� ���� double, �� ������� ����� ����������� ���������.
        @return ��������� ���������.
    */
    Complex operator * ( const double & );
    /*!
        @brief  ���������� ��������� ��������� ��� ����� ���� double � ������������ �����.
        @param  value  ����� ���� double.
        @param  other  ����������� �����.
        @return ��������� ���������.
    */

    friend Complex operator * ( const double &, const Complex & );
    /*!
        @brief  ���������� �������� ��� ����������� ������
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
