// MLBC
// Sobrecarga de operadores
// 02 06 2022
#include "Punto.h"
Punto::Punto(){
    x = 0;
    y = 0;
}
Punto::Punto(double x, double y){
    this -> x = x;
    this -> y = y;
}
Punto::~Punto(){}
// accesores
double Punto::getX()const{
    return x;
}
double Punto::getY() const{
    return y;
}
// modificadores
void Punto::setX(double x){
    this -> x = x;
}
void Punto::setY(double y){
    this -> y = y;
}
// sobrecarga de operadores
// sobrecarga operador >
// un punto es mayor que otro si ambas componentes x y son mayores
bool Punto::operator>(Punto p){
    return x > p.getX() && y > p.getY();
}
// operador +=
// agrega una cantidad double a ambas componentes de l punto
void Punto::operator+=(double cantidad){
    x += cantidad;
    y += cantidad;
}
// operador +=
// suma los componentes x y de dos puntos y los coloca en el objeto invocador
void Punto::operator+=(Punto const& p){
    x += p.getX();
    y += p.getY();
}
// sobrecarga operador -
// resta a los componentes x y del punto, los componentes x y del punto p
Punto Punto::operator-(Punto const& p){
    Punto resultadoResta;
    resultadoResta.setX(x - p.getX());
    resultadoResta.setY(y - p.getY());
    return resultadoResta;
}
// operador ++ post incremento, agrega 1 a cada componente
void Punto::operator++(int){
    x++;
    y++;
}
// operador ++ pre incremento, agrega 1 a cada componente
void Punto::operator++(){
    ++x;
    ++y;
}
void Punto::operator=(Punto const& p){
    x = p.getX();
    y = p.getY();
}
Punto Punto::operator+(Punto const& p){
    Punto resultado;
    resultado.setX(x + p.getX());
    resultado.setY(y + p.getY());
    return resultado;
}
// sobrecarga operador <<
ostream& operator<< (ostream& salida, Punto const &puntoImprime){
    salida <<"<" << puntoImprime.getX() << "," << puntoImprime.getY() << ">\n";
    return salida;
}
istream& operator>> (istream& entrada, Punto & puntoLee){
    double laX, laY;
    entrada >> laX>> laY;
    puntoLee.setX(laX);
    puntoLee.setY(laY);
    return entrada;
}