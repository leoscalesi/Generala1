


#include <iostream>
using namespace std;
#include <string>
# include <ctime>
#include <cstdlib>

/* funcion que pide nombre al usuario */

string pido_nombre(){

  string nombre;
  cout << " Ingrese nombre: ";
  cin >> nombre;

  return nombre;
}

string pido_apellido(){
  string apellido;

  cout << " Ingrese apellido: ";
  cin >> apellido;

  return apellido;
}

/* funcion que tira al azar los dados, y tambien permite ingresar
los valores manualmente*/

void tiro_dados(int t,int dados []){

  int i;
  /* Escribo valores manualmente para probar puntajes*/

  /*for(i=0;i<5;i++){
     cout << " Ingrese "<< endl;
     cin >> dados[i];
     }*/
   /*Inicializo los numeros aleatorios*/

  srand(time( NULL ));

  for (i=0;i<t;i++){

    dados[i]=1+rand()%(7-1);
    }
}
/* funcion encargada de tirar nuevamente los dados,pero solo los dados
que el usuario elija*/

void reemplazo(int cant,int dadosreemplazo[]){
  int i;

  for(i=0;i<cant;i++){
    cout<< endl;
    cout << " INGRESE NUEVO DADO A SORTEAR: " ;
    cin >> dadosreemplazo[i];

  }
}

/* funcion que ordena de menor a mayor los dados dentro del vector*/

void ordenamenoramayor(int t,int dados[]){
  int i,x,aux;

  for (i=0;i<4;i++){

    for (x=0;x<4;x++){

      if (dados[x] > dados[x+1]){
        aux=dados[x];
        dados[x]=dados[x+1];
        dados[x+1]=aux;
      }
    }
  }
}
/* funcion encargada de ver si hay generala*/

int busca_generala(int t,int dados[]){

  int i,cont=0;

  for(i=0;i<4;i++){
    if(dados[i]==dados[i+1]){
      cont++;
    }
  }
  if (cont==4){
    return 1;
  }
  else{
    return 0;
  }
}

/* funcion encargada de ver si hay poker */

int busca_poker(int t,int dados[]){
  int i,cont=0,actual;

  actual=dados[0];

  for(i=0;i<5;i++){

     if(actual==dados[i+1] ){
        if (actual==dados[i+2]){
           cont++;
           actual=dados[i+1];
      }
     }
     else{
       if(actual!=dados[i+1]){
         actual=dados[i+1];

       }
     }
  }
  if (cont==2){
    return 1;
  }
  else{
    return 0;
  }
}


/* funcion que detecta si hay full*/

int busca_full(int t,int dados[],int contmayor,int contmenor){

    if ((contmayor==3 &&  contmenor==2)||(contmayor==2 && contmenor==3)){
            return 1;
    }
    else{
            return 0;
    }
}

/* funcion que detecta escalera*/

int busca_escalera(int t,int dados[]){
  int i,cont=0;

  for(i=0;i<5;i++){
    if(dados[i]<dados[i+1] && dados[i]+1==dados[i+1]){
      cont++;
    }
  }
  if(cont==4){
    return 1;
  }
  else{
    return 0;
  }
}

/* las siguientes funciones son utilizadas en caso de que el jugador
no haya completado ninguno de los juegos mas importantes(es decir
generala,poker,full, escalera)*/


int busca_mayor(int t,int dados[]){
    int maximo,i;
    maximo=dados[0];
    for(i=1;i<5;i++){
            if(dados[i]>maximo){
                    maximo=dados[i];
            }
    }
    return maximo;
}

int cuenta_mayor(int t,int mayor,int dados[]){
  int i,cont=0;
  for(i=0;i<5;i++){
    if(dados[i]==mayor){
      cont++;
    }
  }
  return cont;
}


int busca_menor(int t,int dados[]){
    int minimo,i;
    minimo=dados[0];
    for(i=1;i<5;i++){
            if(dados[i]<minimo){
                    minimo=dados[i];
            }
    }
    return minimo;
}

int cuenta_menor(int t,int menor,int dados[]){
  int i,cont=0;
  for(i=0;i<5;i++){
    if(dados[i]==menor){
      cont++;
    }
  }
  return cont;
}



int busca_segundo_mayor(int t,int mayor,int dados[]){
  int i,segundomaximo;
  segundomaximo=dados[0];
  for(i=1;i<5;i++){
    if(dados[i]>segundomaximo && dados[i]<mayor){
      segundomaximo=dados[i];
    }
  }
  return segundomaximo;
}

int cuenta_segundo_mayor(int t,int segundomayor,int dados[]){
  int i,cont=0;
  for(i=0;i<5;i++){
    if(dados[i]==segundomayor){
      cont++;
    }
  }
  return cont;
}

int busca_tercer_mayor(int t,int segundomayor,int dados[]){
  int i,tercermaximo;
  tercermaximo=dados[0];
  for(i=1;i<5;i++){
    if(dados[i]>tercermaximo && dados[i]<segundomayor){
      tercermaximo=dados[i];
    }
  }
  return tercermaximo;
}

int cuenta_tercer_mayor(int t,int tercermayor,int dados[]){
  int i,cont=0;
  for(i=0;i<5;i++){
    if(dados[i]==tercermayor){
      cont++;
    }
  }
  return cont;
}

int suma_mayor(int t,int dados[],int mayor){
    int i,suma=0;

    for(i=0;i<5;i++){
            if(dados[i]==mayor){
                    suma+=mayor;
            }
    }
    return suma;
}
int suma_segundo_mayor(int t,int dados[],int segundomayor){
    int i,suma=0;

    for(i=0;i<5;i++){
            if(dados[i]==segundomayor){
                    suma+=segundomayor;
            }
    }
    return suma;
}

int suma_tercer_mayor(int t,int dados[],int tercermayor){
    int i,suma=0;

    for(i=0;i<5;i++){
            if(dados[i]==tercermayor){
                    suma+=tercermayor;
            }
    }
    return suma;
}

int main() {

  /*string jugador1;
  string apellido1;*/


   /*Cadenas de caracteres de c*/

  char jugador1[25];
  char apellido1[25];


  cout << " Ingrese nombre " << endl;
  cin.getline (jugador1,25);
  cout << " Ingrese apellido " << endl;
  cin.getline (apellido1,25);


  int cantrondas=0, dados[5],i;
  string respuesta;
  int cant,x;
  int dadosreemplazo[5];
  int nuevosorteo[5];
  int reemplazado,sorteado,anterior;
  int mayor,contmayor;
  int menor,contmenor;
  int segundomayor,contsegundomayor;
  int tercermayor,conttercermayor;
  int sumamayor,sumasegundomayor,sumatercermayor;
  int record=0;

  int rondas=0;
  int puntaje=0,puntajeronda;
  int lanzamientos;

  int generala;
  int poker;
  int escalera;
  int full;

  bool generalaservida=0;
  bool siguejugando=0;

  /* Cartel bienvenida*/

  cout << endl << endl << endl << endl << endl;
  cout << "\t " << "\t "<<"\t" ;
  cout << " BIENVENIDO A LA GENERALA ";
  cout << endl << endl << endl << endl << endl;
  system("pause");
  system("cls");

  /* llamo a la funcion que pide el nombre y apellido al usuario*/

  /*jugador1=pido_nombre();
  apellido1=pido_apellido();*/

  system("pause");
  system("cls");

  cout << endl<<endl;


 /* ciclo que de ser sigue jugando 0 el jugador podra volver a jugar indefinidamente
 diferentes partidas*/

  while(siguejugando==0){

/*ciclo exacto que corresponde a la cantidad de rondas, 10 por defecto */

    for(x=0;x<2;x++){

      lanzamientos=0;
      rondas++;
      puntajeronda=0;

      /*cuento por primera vez el lanzamiento*/
      lanzamientos++;

      cout << " TURNO DE " << jugador1  << " | " << " RONDA NRO " << rondas  <<" | " << " PUNTAJE TOTAL: "<< puntaje << " PUNTOS "
      << " | " <<" RECORD: " << record;
      cout << endl ;
      cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
      cout << endl<<endl;

      /* llamo a la funcion que sortea los dados*/
      tiro_dados(5,dados);



      cout << " LANZAMIENTO NRO: " << lanzamientos ;
      cout << endl << endl;
      cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
      cout << endl << endl;

      /* muestra que dados salieron en el primer lanzamiento*/

      for (i=0;i<5;i++){

         cout << dados[i] << "\t";

      }
      /* llamo a la funcion generala para ver si salio generala servida*/

      generala=busca_generala(5,dados);

      if (lanzamientos==1){

            if(generala==1){
                break;
            }
         }
      /* ciclo inexacto que trabaja sobre el segundo y tercer lanzamiento*/

      while(lanzamientos <=2){

          cout <<endl<<endl;

          /*cuento otro lanzamiento*/

          lanzamientos ++;
          cout<< endl;

          cout << " VUELVE A TIRAR?  (S/N) " << endl;
          cin >> respuesta;

          if (respuesta=="s" || respuesta=="S"){
            cout<< endl;
            cout << " CUANTOS DADOS QUIERE REEMPLAZAR? ";
            cin >> cant;

            /* funcion que se encarga de guardar en un vector los dados que el usuario
            quiere reemplazar*/

            reemplazo(cant,dadosreemplazo);

            /* Ahora sorteo  nuevos valores*/

            tiro_dados(cant,nuevosorteo);


            /* Ahora debo colocar estos nuevos dados en el vector original*/

            for(i=0;i<cant;i++){

              reemplazado=dadosreemplazo[i];
              sorteado=nuevosorteo[i];
              dados[reemplazado-1]=sorteado;
            }

            /* Muestro el numero de lanzamiento*/
            cout << endl << endl << endl;
            cout << " LANZAMIENTO NRO: " << lanzamientos << endl;
            cout << endl;
            cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
            cout << endl << endl;

            /* Muestro el nuevo lanzamiento*/

            for(i=0;i<5;i++){

                cout << dados[i] << "\t";
            }
            cout << endl ;
         }
          else{
             break;
          }
          }

         /* Evaluo puntajes ordenando de menor a mayor los dados*/

         ordenamenoramayor(5,dados);
         /* A partir de aca el sigo trabajando con el vector ordenado de menor a mayor,
         para facilitar evaluar el puntaje*/


         generala=busca_generala(5,dados);

         /* Evaluo si hay generala*/

         if(generala==1){
                 /* Acumulador puntaje*/
                 puntaje+=50;
                 /*Variable que muestra el puntaje puntual de cada ronda*/
                 puntajeronda=50;

            cout << endl << endl;
            }

         /* Evaluo si hay poker*/

         if( generala==0){
            poker=busca_poker(5,dados);
            if(poker==1){
               puntaje+=40;
               puntajeronda=40;

               cout << endl << endl;
            }
          }

         /* Evaluo si hay full , buscando mayor y menor dentro del vector, para facilitar
         la deteccion del full*/

         if(generala==0 && poker==0){

            mayor=busca_mayor(5,dados);
            contmayor=cuenta_mayor(5,mayor,dados);
            menor=busca_menor(5,dados);
            contmenor=cuenta_menor(5,menor,dados);

            full=busca_full(5,dados,contmayor,contmenor);
            if (full==1){
               puntaje+=30;
               puntajeronda=30;

               cout << endl << endl;
            }
         }

         /* Evaluo si hay escalera*/

         if (generala==0 && poker==0 && full==0){

            escalera=busca_escalera(5,dados);
            if(escalera==1){
               puntaje+=25;
               puntajeronda=25;

               cout << endl << endl;
            }
         }

         /* En caso de que no tengamos ninguno de los juegos mas importantes,
         buscamos la que valor es el mas alto de los sueltos*/

         if (generala==0 && poker==0 && full==0 && escalera==0){

             mayor=busca_mayor(5,dados);
             contmayor=cuenta_mayor(5,mayor,dados);
             segundomayor=busca_segundo_mayor(5,mayor,dados);
             contsegundomayor=cuenta_segundo_mayor(5,segundomayor,dados);
             tercermayor=busca_tercer_mayor(5,segundomayor,dados);
             conttercermayor=cuenta_tercer_mayor(5,tercermayor,dados);

             /* AHORA QUE TENGO LOS MAYORES NECESARIOS, PUEDO EMPEZAR A EVALUAR LOS PUNTAJES*/

             sumamayor=suma_mayor(5,dados,mayor);
             sumasegundomayor=suma_segundo_mayor(5,dados,segundomayor);
             sumatercermayor=suma_tercer_mayor(5,dados,tercermayor);

         if(sumamayor>=sumasegundomayor && sumamayor>=sumatercermayor){
              puntaje+=mayor*contmayor;
              puntajeronda=mayor*contmayor;

              cout << endl << endl;
            }
         else{
              if(sumasegundomayor>=sumamayor){
                  puntaje+=segundomayor*contsegundomayor;
                  puntajeronda=segundomayor*contsegundomayor;

                  cout << endl << endl;
                            }
              else{
                  if(sumatercermayor>=sumamayor){
                     puntaje+=tercermayor*conttercermayor;
                     puntajeronda=tercermayor*conttercermayor;

                     cout << endl << endl;
                                     }
                  }
             }
           }

           /*Muestra puntaje que saco en el lanzamiento*/

           cout <<  " TU PUNTAJE ES: "<< puntajeronda << endl;
           cout << endl << endl << endl;
           system ("pause");
           system("cls");

           /* Mensaje que muestra el puntaje que saco en la ronda anterior*/

           cout << endl << endl << endl << endl << endl;
           cout << "\t " << "\t " << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
           cout << endl;
           cout <<"\t"<<"\t"<<"\t"<<"\t"<< " RONDA NRO:"  << rondas << endl << endl;
           cout << "\t"<<"\t"<<"\t"<<"\t"<< " PROXIMO TURNO: " << jugador1 << endl << endl;
           cout << endl << endl;
           cout << "\t"<<"\t"<<"\t"<<"\t"<< " PUNTAJE " << jugador1 << ":"<< puntaje << " PUNTOS " << endl;
           cout << "\t " << "\t " << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
           cout << endl << endl << endl << endl << endl << endl;
           system("pause");
           system("cls");

           }  /* Salgo del for que se encarga de las rondas*/

          /* Mensaje que aparece si sale generala servida*/

           if (lanzamientos==1 && generala==1){
              cout << endl << endl;
              cout << " HAS SACADO GENERALA SERVIDA !!! " << endl;
              cout << endl << endl;
              system("pause");
              system("cls");
              cout << endl << endl << endl << endl << endl;
              cout << "\t " << "\t " << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
              cout <<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<< jugador1 <<" " << apellido1 << " HAS GANADO LA PARTIDA " << endl;
              cout << "\t " << "\t " << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
              cout << endl << endl << endl << endl << endl << endl<< endl << endl;
              system("pause");
              system("cls");
              cout << " DESEA VOLVER A JUGAR? (S/N) ";
              cin >> respuesta;
              cout << endl << endl<<endl<<endl<<endl<<endl;
              system("pause");
              system("cls");

              if (respuesta=="s" || respuesta=="S"){
                  /* No es necesario poner el siguejugando=0, ya estaba en 0;*/
                  siguejugando=0;

                  rondas=0;
                  puntaje=0;
                  puntajeronda=0;

              }
              else{
                siguejugando=1;
              }

           }
           /* Decidi no contar el puntaje en caso de que salga la generala servida*/

           /* Este else corresponde a si se cumplieron las 10 rondas por defecto*/
           else{
              cout << endl << endl<<endl<<endl<<endl<<endl;
              cout << "\t " << "\t " << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
              cout << "\t"<<"\t"<<"\t"<<"\t"<<"\t"<< " PUNTAJE FINAL " << jugador1 << " " << apellido1<<
              " : "<< puntaje << " PUNTOS " << endl;
              cout << "\t " << "\t " << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
              cout << endl << endl<<endl<<endl<<endl<<endl;
              system("pause");
              system("cls");
              cout << " DESEA VOLVER A JUGAR? (S/N) ";
              cin >> respuesta;
              cout << endl << endl<<endl<<endl<<endl<<endl;

              if (respuesta=="s" || respuesta=="S"){
                 if (x==0){
                   /* Guardo el puntaje del primer juego completo como mas alto*/
                   record=puntaje;
                 }
                 /* Si en juegos posteriores hay un puntaje mas alto se actualizara el record*/
                 else{
                    if (puntaje>record){
                       record=puntaje;
                  }
                 }

                 cout<<endl<<endl<<endl<<endl<<endl<<endl;
                 cout << " PUNTAJE RECORD : " << record;
                 cout<<endl<<endl<<endl<<endl<<endl<<endl;
                 /*if (puntaje>record){
                    record=puntaje;
                  }*/

                  siguejugando=0;
                  rondas=0;
                  puntaje=0;
                  puntajeronda=0;



              }
              else{
                siguejugando=1;
              }

              system("pause");
              system("cls");


              }


         } /* Finaliza el while infinito */


         cout << endl << endl<<endl<<endl<<endl<<endl;
         cout << "\t " << "\t "<<"\t" ;
         cout << " GRACIAS POR JUGAR " ;
         cout << endl << endl<<endl<<endl<<endl<<endl;

  return 0;
}
