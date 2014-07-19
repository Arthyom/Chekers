#include "jugador.h"

Jugador::Jugador             ()
{
    /*iniciar propiedades a null o 0 */
    this->Estado    = 0 ;
    this->Nombre    = " ";
    this->Pcapt     = 0;
    this->Plibres   = 12 ;
    this->Color     = ' ';
    this->Penemigas = 0;

}

void Jugador::Nombrar        ()
{
    this->DibujarCaja("| Escriba su nombre |", 30);
    cin>>this->Nombre;

    cout<<endl;

    this->DibujarCaja(" Seleccione el color [ B / N ] )",25);
    cin>>this->Color;

}

/*** encierra en un rectanfulo un texto y lo muestra en la
 *  posicion indicada como "Espacios" ***/
void Jugador::DibujarCaja      (string Texto, int Espacios)
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






/** recive un nuemero que representa a la casilla y el tablero en el que se juega
 *  regresa un vector que indica la coordenada (X,Y) de la casilla enviada
 *  donde en el vector regresado la posicion [0] = X , [1] = y ****/
int *Jugador::Convertir         (int Casilla)
{
    /* el tablero se nombra igual que una matriz nomal con (0,0) en el extremo superior izquierdo */

    int *CoorXY = new int [2];
    /* decir segun la Casilla enviada */
    switch (Casilla)
    {

    /** CoorXY[0] = Coordenada X, CoorXY[1] = Coordenada Y
     * el Vector CoorXY representa a la cordenada (X,Y) */

    case 0: CoorXY[0] = 0; CoorXY[1] = 0;  break;

    case 1: CoorXY[0] = 0; CoorXY[1] = 0;  break;
    case 2: CoorXY[0] = 1; CoorXY[1] = 0;  break;
    case 3: CoorXY[0] = 2; CoorXY[1] = 0;  break;
    case 4: CoorXY[0] = 3; CoorXY[1] = 0;  break;
    case 5: CoorXY[0] = 4; CoorXY[1] = 0;  break;
    case 6: CoorXY[0] = 5; CoorXY[1] = 0;  break;
    case 7: CoorXY[0] = 6; CoorXY[1] = 0;  break;
    case 8: CoorXY[0] = 7; CoorXY[1] = 0;  break;

    case 9:  CoorXY[0] = 0; CoorXY[1] = 1;  break;
    case 10: CoorXY[0] = 1; CoorXY[1] = 1;  break;
    case 11: CoorXY[0] = 2; CoorXY[1] = 1;  break;
    case 12: CoorXY[0] = 3; CoorXY[1] = 1;  break;
    case 13: CoorXY[0] = 4; CoorXY[1] = 1;  break;
    case 14: CoorXY[0] = 5; CoorXY[1] = 1;  break;
    case 15: CoorXY[0] = 6; CoorXY[1] = 1;  break;
    case 16: CoorXY[0] = 7; CoorXY[1] = 1;  break;

    case 17: CoorXY[0] = 0; CoorXY[1] = 2;  break;
    case 18: CoorXY[0] = 1; CoorXY[1] = 2;  break;
    case 19: CoorXY[0] = 2; CoorXY[1] = 2;  break;
    case 20: CoorXY[0] = 3; CoorXY[1] = 2;  break;
    case 21: CoorXY[0] = 4; CoorXY[1] = 2;  break;
    case 22: CoorXY[0] = 5; CoorXY[1] = 2;  break;
    case 23: CoorXY[0] = 6; CoorXY[1] = 2;  break;
    case 24: CoorXY[0] = 7; CoorXY[1] = 2;  break;

    case 25: CoorXY[0] = 0; CoorXY[1] = 3;  break;
    case 26: CoorXY[0] = 1; CoorXY[1] = 3;  break;
    case 27: CoorXY[0] = 2; CoorXY[1] = 3;  break;
    case 28: CoorXY[0] = 3; CoorXY[1] = 3;  break;
    case 29: CoorXY[0] = 4; CoorXY[1] = 3;  break;
    case 30: CoorXY[0] = 5; CoorXY[1] = 3;  break;
    case 31: CoorXY[0] = 6; CoorXY[1] = 3;  break;
    case 32: CoorXY[0] = 7; CoorXY[1] = 3;  break;

    case 33: CoorXY[0] = 0; CoorXY[1] = 4;  break;
    case 34: CoorXY[0] = 1; CoorXY[1] = 4;  break;
    case 35: CoorXY[0] = 2; CoorXY[1] = 4;  break;
    case 36: CoorXY[0] = 3; CoorXY[1] = 4;  break;
    case 37: CoorXY[0] = 4; CoorXY[1] = 4;  break;
    case 38: CoorXY[0] = 5; CoorXY[1] = 4;  break;
    case 39: CoorXY[0] = 6; CoorXY[1] = 4;  break;
    case 40: CoorXY[0] = 7; CoorXY[1] = 4;  break;

    case 41: CoorXY[0] = 0; CoorXY[1] = 5;  break;
    case 42: CoorXY[0] = 1; CoorXY[1] = 5;  break;
    case 43: CoorXY[0] = 2; CoorXY[1] = 5;  break;
    case 44: CoorXY[0] = 3; CoorXY[1] = 5;  break;
    case 45: CoorXY[0] = 4; CoorXY[1] = 5;  break;
    case 46: CoorXY[0] = 5; CoorXY[1] = 5;  break;
    case 47: CoorXY[0] = 6; CoorXY[1] = 5;  break;
    case 48: CoorXY[0] = 7; CoorXY[1] = 5;  break;

    case 49: CoorXY[0] = 0; CoorXY[1] = 6;  break;
    case 50: CoorXY[0] = 1; CoorXY[1] = 6;  break;
    case 51: CoorXY[0] = 2; CoorXY[1] = 6;  break;
    case 52: CoorXY[0] = 3; CoorXY[1] = 6;  break;
    case 53: CoorXY[0] = 4; CoorXY[1] = 6;  break;
    case 54: CoorXY[0] = 5; CoorXY[1] = 6;  break;
    case 55: CoorXY[0] = 6; CoorXY[1] = 6;  break;
    case 56: CoorXY[0] = 7; CoorXY[1] = 6;  break;

    case 57: CoorXY[0] = 0; CoorXY[1] = 7;  break;
    case 58: CoorXY[0] = 1; CoorXY[1] = 7;  break;
    case 59: CoorXY[0] = 2; CoorXY[1] = 7;  break;
    case 60: CoorXY[0] = 3; CoorXY[1] = 7;  break;
    case 61: CoorXY[0] = 4; CoorXY[1] = 7;  break;
    case 62: CoorXY[0] = 5; CoorXY[1] = 7;  break;
    case 63: CoorXY[0] = 6; CoorXY[1] = 7;  break;
    case 64: CoorXY[0] = 7; CoorXY[1] = 7;  break;
    }

    return CoorXY;
}






/** verifica que la pieza indicada pueda ser usada, en caso de no serlo
 *  el metodo usa recursividad para seguir preguntando hasta conseguir una
 *  casilla valida, es muy parecido al metodo convertir ***/
int* Jugador::Seleccionar       (int Casilla, Tablero *T1)
{
    int *CoorXY = NULL;
    /* Mientras No se indique una casilla valida */
        if( Casilla > 0 && Casilla <65 )
        {
            CoorXY = this->Convertir(Casilla);
            int X = CoorXY[0];
            int Y = CoorXY[1];

            /* verificar que la casilla indicada tenga una Ficha del color del jugador */
            if( T1->MatrizJuego[Y][X].Color == this->Color )
            {
                /* seleccionar esa casilla */
                if(this->Color == 'B')
                    T1->MatrizJuego[Y][X].Color = 'b';
                else
                    T1->MatrizJuego[Y][X].Color = 'n';

            }
            else
            {
                cout<<"la casilla "<< Casilla <<" no es del color "<<this->Color
                   <<" por favor escoja una casilla de su colo ( "<<this->Color<<" )"<<endl;
                int b = 0 ;
                cin >> b;
                this->Seleccionar(b,T1);
            }
        }

        return CoorXY;
}





/** imprime en pantalla el tablero **/
void Jugador::VerTablero        (Tablero *T1)
{
    int f = 1;
    /*imprimir el tablero fisico*/
    for(int i = 0 ; i < 8 ; i++)
    {
        cout<<endl;

        for(int j = 0 ; j < 8 ; j++)
            cout<<"| "<<T1->MatrizJuego[i][j].Color<<" ";

        cout<<"     ";

        /* parte para intrucciones */
        for( int k = 0; k < 8 ; k ++, f++ )
        {
            /* es casilla non */
            if( T1->MatrizJuego[i][k].Color != ' ')
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





/*** metodo de juego principal , pide al usuario seleccione una casilla con una pieza
 *   muestras las casillas que esa pieza puedeatacar y pregunta que casilla desea ocupar o
 *   da opciones para seleccionar otra pieza *****/
void Jugador::Jugar             (Tablero *T1)
{
    int Movimiento = 0 ;
    this->VerTablero(T1);

    /* mientras no se haga un movimiento valido */
    while(!Movimiento)
    {

      /*conseguir una casilla valida */
      cout<<endl<<"Seleccione una Ficha de su mismo color"<<endl;
      int Cseleccionada = 0;
      cin>> Cseleccionada;

      int *CoorXY = this->Seleccionar(Cseleccionada,T1);
      int x = CoorXY[0];
      int y = CoorXY[1];



      /*Actualizar la ficha actual del jugador */
      this->Pactual(x,y);

     /* amenazar las casillas adecuadas */
     char Respuesta = this->Amenazar(T1);

      if(Respuesta == 'S' || Respuesta == 's')
          this->SoltarPieza(T1);

     else
      {
          /*** aqui va el metodo para mover piezas ***/

          Movimiento = 1;
          cout<<endl;
      }
    }
}






/**** asigna a las propiedades del jugador(ActualX, ActualY) los parametros X,y*/
void Jugador::Pactual           (int X, int Y)
{
    /* actualizar la pieza actual del usuario */
    this->ActualX = X;
    this->ActualY = Y;

}





/**** regresa la pieza indicada en sus parametros al estado neutral ´N´
      y pone la pieza actual del jugador (propiedades ActualX, ActualY) en -1 ***/
void Jugador::SoltarPieza       (Tablero *T1)
{
    /* se ha soltado la pieza, poner en nuetral el tablero e indicar que no hay
     * pieza actual (-1,-1)*/

    T1->MatrizJuego[ this->ActualY ][ this->ActualX ].Color = this->Color;

    this->ActualX = 0;
    this->ActualY = 0;

    /** recorrer el tablero y borrar amenazas **/
    this->BorrarAmenaza(T1);


}




/*** mostrar en el tablero las casillas que una ficha seleccionada puede atacar
     se puede usar S/s para soltar la pieza y seleccionar otra    ***/
char Jugador::Amenazar           (Tablero *T1)
{
    /* se puede amenazar posciciones como peon o como reina,
     * dependiendo del tipo de la pieza que se tenga seleccionada */
    if(T1->MatrizJuego[this->ActualY][this->ActualX].Tipo == 0)
        this->AmenazarNormal(T1);
    else
        this->AmenazarReina(T1);

    cout<<endl<<"Seleccione la casilla a ocupar | [ S/s ] para soltar pieza |"<<endl;
          char Respuesta = 0 ;
          cin>>Respuesta;

         return Respuesta;

}




/*** muestra con un 'o' las casillas que puede ocupar una pieza cuando  es reina **/
/**** aun no programado ***/
void Jugador::AmenazarReina(Tablero *T1)
{
    /* Resaltar casilla que se pueden atacar */
}




/*** muestra con un 'o' las casillas que puede ocupar una pieza cuando no es reina **/
void Jugador::AmenazarNormal    (Tablero *T1)
{
    /* recivir y abrir paquuetes */
    int x = this->ActualX;
    int y = this->ActualY;

    char ColoJugador = this->Color;


    /** ver que se pueda acceder a la las casillas mas
     * arriba de la actual [Superior derecha] **/

    if( this->ActualX + 1 < 8 && this->ActualY - 1 >= 0)
    {
        if( T1->MatrizJuego[y - 1][x + 1].Color == ' ' )
            T1->MatrizJuego[y - 1][x + 1].Color = 'o';
        else
            if( this->ActualX + 2 < 8 &&  this->ActualY - 2 >= 8 )
                    if(  ( T1->MatrizJuego[ y - 2 ][ x + 2 ].Color == ' ')   &&   (T1->MatrizJuego[ y - 1 ][ x + 1 ].Color == ColoJugador) )
                        T1->MatrizJuego[ y - 2 ][ x + 2 ].Color == 'o';
    }


    /** ver que se pueda acceder a la las casillas mas
     * abajo de la actual [inferior derecha] **/
    if( this->ActualX + 1 < 8 && this->ActualY + 1 < 8)
    {
        if( T1->MatrizJuego[y + 1][x + 1].Color == ' ' )
            T1->MatrizJuego[y + 1][x + 1].Color = 'o';
        else
            if( this->ActualX + 2 < 8 &&  this->ActualY + 2 < 8 )
                    if(  ( T1->MatrizJuego[ y + 2 ][ x + 2 ].Color == ' ')   &&   (T1->MatrizJuego[ y + 1 ][ x + 1 ].Color == ColoJugador) )
                        T1->MatrizJuego[ y + 2 ][ x + 2 ].Color == 'o';
    }


    /** ver que se pueda acceder a la las casillas mas
     * arriba de la actual [superior izquierda] **/
    if( this->ActualX - 1 >= 0 && this->ActualY - 1 >= 0 )
    {
        if( T1->MatrizJuego[y - 1][x - 1].Color == ' ' )
            T1->MatrizJuego[y - 1][x - 1].Color = 'o';
        else
            if( this->ActualX - 2 >= 0 &&  this->ActualY - 2 >= 0 )
                    if(  ( T1->MatrizJuego[ y - 2 ][ x - 2 ].Color == ' ')   &&   (T1->MatrizJuego[ y - 1 ][ x - 1 ].Color == ColoJugador) )
                        T1->MatrizJuego[ y - 2 ][ x - 2 ].Color == 'o';
    }


    /** ver que se pueda acceder a la las casillas mas
     * abajo de la actual [inferior izquierda] **/
    if( this->ActualY + 1 < 8 && this->ActualX - 1 >= 0)
    {
        if( T1->MatrizJuego[y + 1][x - 1].Color == ' ' )
            T1->MatrizJuego[y + 1][x - 1].Color = 'o';
        else
            if( this->ActualX - 2 >= 0 &&  this->ActualY + 2 < 8 )
                    if(  ( T1->MatrizJuego[ y + 2 ][ x - 2 ].Color == ' ')   &&   (T1->MatrizJuego[ y + 1 ][ x - 1 ].Color == ColoJugador) )
                        T1->MatrizJuego[ y + 2 ][ x - 2 ].Color == 'o';
    }
    this->VerTablero(T1);
}




/*** imprime 1000 espacios en blanco en pantalla para imitar una instruccion "clear" ***/
void Jugador::LimpiarPantalla()
{
    cout<<endl<<" | Presione cualquier tecla para continuar | "<<endl;
    int a = 0;
    cin>>a;

     /*imprimir en pantalla como si de una matriz comun se tratara */
    for( int i = 0; i < 20 ; i ++ )
    cout<<endl;
}



/** recorre el tablero en busca de casillas con el simbolo 'o'
*  de encontrarlas el metodo borra el simbolo y regresa la casilla
*  a su estado neutral (con un epacio en blanco) **/
void Jugador::BorrarAmenaza(Tablero *T1)
{
    /* recorrer el tablero en busca de circulos y borrarlos */
    for( int i = 0 ; i < 8 ; i ++ )
        for( int j = 0 ; j < 8 ; j++ )
            if( T1->MatrizJuego[i][j].Color == 'o' )
                T1->MatrizJuego[i][j].Color = ' ';

    cout<<endl<<endl<<endl;

    this->VerTablero(T1);
}















