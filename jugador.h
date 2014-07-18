#ifndef JUGADOR_H
#define JUGADOR_H
#include<tablero.h>

class Jugador
{
   /* propiedades de la clase jugador */
    public:
         string Nombre;
         char   Color;
         int    Plibres;
         int    Pcapt;
         int    Penemigas;
         int    Estado;

         int    ActualX;
         int    ActualY;



    /*metodos de la clase jugador */
    public:
         Jugador();
         void   Nombrar             ();
         void   Jugar               (Tablero *T1);
         int   *Convertir           (int Casilla);
         void   VerTablero          (Tablero *T1);
         void   DibujarCaja         (string Texto, int Espacios);
         int*   Seleccionar         (int Casilla, Tablero *T1);

         void   SoltarPieza         (Tablero *T1);
         char   Amenazar           (Tablero *T1);
         void   Pactual             (int X, int Y);
         void   AmenazarNormal      (Tablero *T1);
         void   AmenazarReina       (Tablero *T1);
         void   LimpiarPantalla     ();
         void   BorrarAmenaza       (Tablero *T1);






};

#endif // JUGADOR_H
