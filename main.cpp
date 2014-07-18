#include<tablero.h>
#include<jugador.h>
#include<cstdlib>
int main()
{
    /* crear un nuevo Tablero */
    Tablero * T1 = new Tablero();

   int Menu1  = T1->MainMenu();
   int Menu2 = T1->SecondMenu(Menu1);
   T1->Instrucciones();




    /* crear un nuevo Jugador */
   // Jugador * player1 = new Jugador();



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

                player1->DibujarCaja(" TUTORIAL [ INTRODUSCA SU NOMBRE Y SU COLOR ] ", 20);

                player1->Nombrar();
                player2->Nombrar();



                /* mientras no se acaben las piezas de ningun jugador */
                while( player1->Penemigas != 12 || player2->Penemigas != 12 )
                {
                    cout<<endl<<"* SU TURNO [ "<<player1->Nombre<<" ]"<< " COLOR [" << player1->Color<<" ]"<<endl;
                    player1->Jugar(T1);

                    cout<<endl<<"* SU TURNO [ "<<player2->Nombre<<" ]"<< " COLOR [" << player2->Color<<" ]"<<endl;
                    player2->Jugar(T1);
                }
   }








    return 0;

}

