#include "tablero.h"
#include <iostream>

    using namespace std;

/* constructor de tablero, pone el tablero */
      Tablero::Tablero      ()
{
    /* reservar espacio para el tablero fisico*/
    this->MatrizJuego = new  Pieza* [8];
    for(int i = 0 ; i < 8 ; i++)
        this->MatrizJuego[i] = new Pieza[8];

    /* poner el tablero vacio */
    for(int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j < 8 ; j ++)
        {
            this->MatrizJuego[i][j].Color = ' ';
            this->MatrizJuego[i][j].Xcoor = j;
            this->MatrizJuego[i][j].Ycoor = i;
        }
    }


    /* poner las 1eras 12 fichas (Negras)*/
    for(int i = 0 ;  i < 3 ; i ++)
    {
       if(i != 1)
            for(int j = 1 ; j < 8 ; j++)
               this->MatrizJuego[i][j++].Color = 'N';

        else
            for(int j = 0 ; j < 8 ; j++)
                this->MatrizJuego[i][j++].Color = 'N';
    }


    /*poner las 2das 12 fichas (Blancas) */
    for(int i = 7 ; i > 4; i-- )
    {
        if(i != 6)
            for(int j = 0 ; j < 8 ; j++)
                this->MatrizJuego[i][j++].Color = 'B';
        else
            for(int j = 1 ; j < 8 ; j++)
                this->MatrizJuego[i][j++].Color = 'B';
    }
}



void  Tablero::VerTablero   ()
{
    /*imprimir el tablero fisico*/
    for(int i = 0 ; i < 8 ; i++)
    {


        cout<<endl;

        for(int j = 0 ; j < 8 ; j++)
            cout<<"| "<<this->MatrizJuego[i][j].Color<<" ";


    }
}

int   Tablero::MainMenu     ()
{
    /* desĺegar el 1er menu */
    cout<<endl;
    this->DibujarCaja("| Seleccione una opcion del menu |",10);
    cout<<endl<<endl;
    this->DibujarCaja("| Humano  Vs  Humanos    [1] |",10);
    this->DibujarCaja("| Humano  Vs  Maquina    [2] |",10);
    this->DibujarCaja("| Maquina Vs  Maquina    [3] |",10);
    this->DibujarCaja("| Estadisticas           [4] |",10);

    int opcion = 0 ;
    cin>>opcion;
  return opcion;

}

int   Tablero::SecondMenu   (int MainMenu)
{
    /* Verificar si se deben crear jugadores virtuales */
    if( MainMenu == 2 || MainMenu == 3 )
    {
        this->DibujarCaja("| Seleccione el nivel |",10);
        this->DibujarCaja("| Facil        [1] |",10);
        this->DibujarCaja("| Medio        [2] |",10);
        this->DibujarCaja("| Dificil      [3] |",10);
    }
    int opcion = 0 ;
    cin>>opcion;
   return opcion;
}

void  Tablero::DibujarCaja  (string Texto, int Espacios)
{
    cout<<endl;

    /* imprimir espacios */
    for(int i = 0 ; i < Espacios; i++)
        cout<<' ';

    /*imprimir carecteres superiores */
    for(int i = 0 ; i < Texto.size(); i++)
        cout<<'_';


    cout<<endl;


    /* imprimir espacios */
    for(int i = 0 ; i < Espacios; i++)
        cout<<' ';

    /*imprimir cadena de texto */
        cout<<Texto<<endl;




    /* imprimir espacios */
    for(int i = 0 ; i < Espacios; i++)
        cout<<' ';

    /*imprimir carecteres superiores */
    for(int i = 0 ; i < Texto.size(); i++)
        cout<<'_';

    cout<<endl;

}
