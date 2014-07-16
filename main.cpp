#include<tablero.h>
#include<jugador.h>
int main()
{
    /* crear un nuevo Tablero */
    Tablero * T1 = new Tablero();

    T1->VerTablero();
   int Menu1  = 1; //T1->MainMenu();
  /// int Menu2 = T1->SecondMenu(Menu1);

    cout<<endl<<endl;

    /* crear un nuevo Jugador */
   // Jugador * player1 = new Jugador();


   int n = 53 ;
   //int *Casilla = player1->Convertir(n);

   //cout<<" Casilla "<<n<<" Posicion (X,Y) "<<" ( "<<Casilla[0]<<","<<Casilla[1]<<" ) "<<endl;

   //player1->Seleccionar(4,T1);

   //player1->VerTablero(T1);

   /* arrancar segun 1er menu **/

   if(Menu1 == 1)
   {
                /* crear 2 nuevos jugadores Fisicos */
                Jugador *player1 = new Jugador();
                Jugador *player2 = new Jugador();

               // player1->Nombrar();
               // player2->Nombrar();

                /* mientras no se acaben las piezas de ningun jugador */
                while(player1->Penemigas != 12 || player2->Penemigas != 12 || T1->Estado != 1)
                {
                    player1->Jugar(T1);
                    player2->Jugar(T1);
                }
   }








    return 0;

}

