// MLBC
// Sobrecarga de operadores
// 02 06 2022
#include <iostream>
using namespace std;
#pragma once
class Punto
{
    public:
        // constructores y destructor
        Punto();
        Punto(double, double);
        ~Punto();
        // accesores
        double getX()const;
        double getY() const;
        // modificadores
        void setX(double);
        void setY(double);
        // sobrecarga de operadores
        bool operator>(Punto);
        void operator+=(double);
        void operator+=(Punto const&);
        void operator=(Punto const&);
        Punto operator+(Punto const&);
        Punto operator-(Punto const&);
        void operator++(int);
        void operator++();
        friend ostream& operator<<(ostream&, Punto const&);
        friend istream& operator>>(istream&, Punto&);
    private:
        double x, y;
};