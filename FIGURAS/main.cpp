// MLBC
// Sobrecarga de operadores
// 02 06 2022
#include <iostream>
#include "Punto.h"
#include "Punto.cpp"
const int N = 10;
using namespace std;
void muestraComoArreglo(Punto*);
void muestraComoApuntador(Punto*);
void llenaApuntadores(Punto*);
int main(){
   /* 
   Punto p[N]; // declaro un arreglo de N objetos de tipo Punto
    muestraComoArreglo(p);
    llenaApuntadores(p); // en una funcion libre, lleno los N elementos del arreglo
    muestraComoApuntador(p); // el arreglo que llene, lo muestro
    Punto *ptr, punto;
    ptr = new Punto(5,5);
    int *g;
    cout << "\nEl contenido de *ptr " << ptr -> getX() << " " << ptr->getY();
    cout << "\nLa direccion de ptr: " << ptr << endl;
    Punto *ptr1 = &punto;
    cout << "\nEl contenido de *ptr1 " << ptr1 -> getX() << " " << ptr1->getY();
    cout << "\nLa direccion de ptr: " << ptr1 << endl;
    punto.setX(25);
    punto.setY(48);
    cout << "\nEl contenido de *ptr1 despues" << ptr1 -> getX() << " " << ptr1-
>getY();
    cout << "\nLa direccion de ptr: " << ptr1 << endl;
    
    */
    Punto p1(5, 10), p2(6, 20), p3(3, 2), p4;
    cout << "p1= " << p1;
    p4 = p2 - p3;
    cout << "p4= " << p4;
    ++ p4; // p4 = p4 + 1
    p4++;
    cout << "p4= " << p4;
    if (p1 > p2){   // p1.operator>(Punto p2)
        cout << " El punto mayor es ";
        cout << "p1= " <<p1;
    }
    else{
        cout << "El mayor es ";
        cout << "p2= " << p2;
    }
    p3 += 3.5;
    cout << "p3= " << p3;
    p3 += p1;
    cout << "p3= " << p3;
    Punto p5, p6;
    p5 = p2 + p3;
    cout << "p5= " << p5;
    cout << "Dame los datos del punto p6, teclea x y ";
    cin >> p6;
    cout << "p6 " << p6;
    
    return 0;
}
void muestraComoArreglo(Punto* puntos){
    cout << "Muestro usando notacion de arreglos\n";
    cout << "La direccion base del arreglo es: " << puntos << endl;
    for(int i = 0; i < N; i ++)
        cout << puntos[i].getX() << " " << puntos[i].getY() << endl;
}
void muestraComoApuntador(Punto *p){
    cout << "\nMuestro usando notacion de apuntadores \n";
    cout << "La direccion del apuntador es: " << p << endl;
    for (int i = 0; i < N; i++, p++)
        cout << (*p).getX() << " " << p->getY() << endl;
}
void llenaApuntadores(Punto *puntos){
    cout << "\nLleno el arreglo\n";
    for(int i = 0, j = 0; i < N; i ++, j++){
        puntos[i].setX(i);
        puntos[i].setY(j);
    }
}