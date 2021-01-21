#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//crea una calcolatrice in grado di sommare sottrarre e moliplicare
//dati tot numeri, fare la divisione tra due interi, elevare a potenza un numero
// e poter fare la radice quadrata di un numero.
int somma(int n, int sceltatot); //effettua il calcolo della somma dati tot n in input
int sottrazione(int n, int sceltatot); //effettua il calcolo della sottrazione dati tot n in input
int moltiplicazione(); //effettua il calcolo della moltiplicazione dati tot n in input
float divisione(float a, float b); //effettua il calcolo della divisione dati 2 n in input
int potenza(int a, int b); //effettua il calcolo della potenza dato un numero e il relativo esponente
int radice(int a); //effettua il calcolo della radice quadtrata dato un numero
int saluti(); //permette di stampare i Saluti alla fine dell'esecuzione del programma

main()
{
  int scelta, scelta2; //scelta dell'operazione da svolgere (menu)
  int  n, i; //numero
  int sceltatot;
  float d; //variabile a chiamata della variabile della funzione divisione
  //men?
  printf("+------------------------------------------------------------+\n");
  printf("CALCOLATRICE DI DECA: \n");
  printf("+------------------------------------------------------------+\n");
  printf("Operazioni possibili: \n");
  printf("1) addizione fra due o piu numeri interi\n");
  printf("2) sottrazione fra due o piu numeri interi\n");
  printf("3) moltiplicazione fra due o piu numeri interi\n");
  printf("4) divisione fra due numeri\n");
  printf("5) elevamento a potenza di un numero intero\n");
  printf("6) Radice quadrata di un numero intero quadrato\n");

  do{
   printf("+------------------------------------------------------------+\n");
   printf("scelta: ");
   scanf("%d", &scelta);
   printf("+------------------------------------------------------------+\n");

    switch (scelta) { //in base alla scelta riferita al menu si arriva al caso previsto
      case 1: //caso somma
          printf("inserire quanti numeri vuoi sommare...");
          scanf("%d", &sceltatot);
          somma(n, sceltatot);
        break;
      case 2: //caso sottrazione
         printf("inserire quanti numeri vuoi che vengano utilizzati...");
         scanf("%d", &sceltatot);
         sottrazione(n, sceltatot);
        break;
      case 3: //caso moltiplicazione
         moltiplicazione(n, sceltatot);
        break;
      case 4: //caso divisione
         divisione(a,b);
        break;
      case 5: //caso elevamento potenza
         potenza(a,b);
        break;
      case 6: //caso radice quadrata
         radice(a);
        break;
      default: printf("ERRORE IMPREVISTO"); //caso errore
        break;
      }


        printf("\n+------------------------------------------------------------+\n");
        printf("Vuoi fare altro? - premi 1 \n");
        printf("Vuoi fermarti? - premi 0\n");
        printf("scelta... ");
         scanf("%i", &scelta2); //scelta per in caso ricominciare il programma

        do{ //ciclo do-while che permette di far reinserire la scelta nel caso sia errata
         if((scelta2!=0)&&(scelta2!=1)){
     	      printf("scelgliere un opzione tra le possibili: ");
     	      scanf("%i", &scelta2);
          }
        }
        while((scelta2!=0)&&(scelta2!=1)); //condizione di ripetizione del ciclo
    }
     while(scelta2==1); //riparte nel caso la scelta2 sia = a 1


     saluti(); //chaiamata della funzione dei saluti

    return(0);
}

int somma(int n, int sceltatot)
{
  int i;
  int somm=0;

  for(i=0; i<sceltatot; i++){
    printf("inserire il %i numero: ", i+1);
    scanf("%i", &n);

    somm+=n;
  }

  printf("la somma risulta: %i \n",somm);

}

int sottrazione(int n, int sceltatot)
{
  int sottr=0, i, a;

  	printf("inserire il 1 numero: ");
  	scanf("%i", &a);

  for(i=0; i<sceltatot-1; i++){
    printf("inserire il %d numero: ", i+2);
    scanf("%d", &n);
    sottr-=n;
  }
  sottr=sottr+a; //assegnazione finale del valore a sottr
  printf("La sottrazione risulta: %i \n", sottr);
}

int moltiplicazione()
{
  int a, b, p, c;
  int scelta;
   printf("inserire il primo numero: ");
   scanf("%i", &a);
   printf("inserire il secondo numero: ");
   scanf("%i", &b);
   p=a*b;

   do{ //escamotage per inserire a piacimento numeri nella moltiplicazione
    printf("la moltiplicazione risulta: %i \n", p);
    printf("1)Vuoi moltiplicarlo ancora per un numero?\n");
    printf("0)Vuoi fermarti con la moltiplicazione?\n");
    scanf("%i", &scelta);

   if (scelta==0){
   	printf("...Fine Moltiplicazione \n");
   }
   else if (scelta==1){
   	printf("inserisci un altro numero: ");
   	scanf("%i", &c);
   	p=p*c;
   }
 }while(scelta==1); //riparte il calcolo dall'ultimo valore di p
}

float divisione(float a, float b)
{
  float d;
  printf("inserire il primo numero: ");
  scanf("%f", &a);
  printf("inserire il secondo numero: ");
  scanf("%f", &b);

  d=a/b;

  if(b==0){
  	d=printf("Math Error"); //errore in caso si divida per zero
  }
  else{
  printf("la divisione tra i due numeri risulta: %f \n", d);
  }
}

int potenza(int a, int b)
{
  int pot, i;
  printf("inserire il numero da elevare a potenza: ");
  scanf("%i", &a);
  printf("inserire l'esponente: ");
  scanf("%i", &b);

  if(a==0){printf("il risultao della potenza e': 0");}
  else if(b==0){printf("il risultao della potenza e': 1");}
  else if(a==0 && b==0){printf("il risultao della potenza e': Impossibile");}
  else{
    pot=pow(a, b);
    printf("la potenza risulta: %i\n", pot);
  }
}

int radice(int a)
{
	int rad;
	printf("inserire il radicando: ");
    scanf("%i", &a);
    rad=sqrt(a);

    printf("la radice quadrata di %i risuta: %i", a, rad);
}

int saluti()
{
	printf("\nGrazie di aver utilizzato questa calcolatrice... a presto\n");
}
