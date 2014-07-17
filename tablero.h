#ifndef TABLERO_H
#define TABLERO_H

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<pieza.h>


    using namespace std;

class Tablero
{
    public:
    /* propiedades de la clase tablero*/
    Pieza ** MatrizJuego;
    int     Estado;


    /* metodos de la clae tablero */
    public:
     Tablero();

     void   VerTablero      ();
     int    MainMenu        ();
     int    SecondMenu      ( int MainMenu );
     void   DibujarCaja     (string Texto, int Espacios);
     int *  Convertir       (int casilla);
     void   LimpiarPantalla ();
     void   Instrucciones   ();

};

#endif // TABLERO_H
