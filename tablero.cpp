#include "tablero.h"
#include <iostream>
#include<stdlib.h>

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


/*** imprime el tablero ****/
void  Tablero::VerTablero   ()
{
    int f = 1;
    /*imprimir el tablero fisico*/
    for(int i = 0 ; i < 8 ; i++)
    {
        cout<<endl;

        for(int j = 0 ; j < 8 ; j++)
            cout<<"| "<<this->MatrizJuego[i][j].Color<<" ";

        cout<<"     ";

        /* parte para intrucciones */
        for( int k = 0; k < 8 ; k ++, f++ )
        {
            /* es casilla non */
            if( this->MatrizJuego[i][k].Color != ' ')
            {
                if( f < 10 )
                    cout<<"|  "<<f<<" ";
                else
                      cout<<"| "<<f<<" ";

            }
            else
                cout<<"|  "<<'_'<<" ";
        }
    }
}



/*** imprime el menu principal y regresa el resultado de la seleccion ***/
int   Tablero::MainMenu     ()
{
    /* desĺegar el 1er menu */
    cout<<endl;
    this->DibujarCaja("| Seleccione una opcion del menu |",21);
    cout<<endl;
    this->DibujarCaja("| Humano  Vs  Humanos    [1] |",23);
    this->DibujarCaja("| Humano  Vs  Maquina    [2] |",23);
    this->DibujarCaja("| Maquina Vs  Maquina    [3] |",23);
    this->DibujarCaja("| Estadisticas           [4] |",23);

    int opcion = 0 ;
    cout<<endl<<endl;
    cin>>opcion;

    this->LimpiarPantalla();

  return opcion;

}


/*** muestra el menu de seleccion de niveles, si se debe crear
*    un jugador virtual ***/
int   Tablero::SecondMenu   (int MainMenu)
{
    /* Verificar si se deben crear jugadores virtuales */
    if( MainMenu == 2 || MainMenu == 3 )
    {
        this->DibujarCaja("| Seleccione el nivel |",28);
        this->DibujarCaja("  |Facil         [1]|",29);
        this->DibujarCaja("  |Medio         [2]|",29);
        this->DibujarCaja("  |Dificil       [3]|",29);

        int opcion = 0 ;
        cout<<endl;
        cin>>opcion;
       return opcion;
    }
 return 0;
}



/** encierra un texto especiicado en un rectangulo y lo imprime
*   en pantalla en una la pocicion indicada como espacios **/
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
}



/*** imprime 1000 espacios en blanco en pantalla para imitar una instruccion "clear" ***/
void Tablero::LimpiarPantalla()
{
    cout<<endl<<" | Presione cualquier tecla para continuar | "<<endl;
    int a = 0;
    cin>>a;

     /*imprimir en pantalla como si de una matriz comun se tratara */
    for( int i = 0; i < 20 ; i ++ )
    cout<<endl;
}



/*** Desplegar instrucciones ***/
void Tablero::Instrucciones()
{
    /** mostrar instruccines de juego **/

    this->DibujarCaja("<------------- INTRUCCIONES ------------->", 20);
    cout<<endl
        <<" 1]  Puede usar las casilla que muestran numero (Ver imagen inferior)"<<endl
        <<" 2]  Escriba el numero de la casilla que desea usar "<<endl
        <<" 3]  Se desplegaran circulos en las casillas que puede usar"<<endl
        <<" 4]  Si no ve los circulos al seleccionar una pieza significa    que la pieza"<<endl
        <<"     esta bloqueada  si esto ocurre use una pieza que no este bloqueada"<<endl;

    this->VerTablero();

    this->LimpiarPantalla();
}
