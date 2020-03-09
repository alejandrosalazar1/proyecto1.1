#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char nombre [20];
int puntos = 0;
int intentos = 0;
char letras ;
char palabra_elegida;
#define MAX_WORDS 23
const char *word_collection[MAX_WORDS]= {
                    "este","es","un","banco","de",
                    "palabras","sientase","en","libertad",
                    "de","agregar","la","cantidad","de",
                    "palabras","que","usted","desee","hasta",
                    "un","maximo","de","MAX_WORDS"
                    };
const char* get_random_word(void);
const char* guiones_bajos(char* a);
void clearscreen(){
    system("@cls||clear");
}

int main()
{
    int opcion;
    //se recorre el programa hasta que se escoja la opcion 4 que es la de salir/
    while(opcion != 4){
        /* Se imprime el menu de opciones */
        printf("================================\n");
        printf("1. Empezar juego \n2. Ver Instrucciones \n3. About \n4. Salir del juego \n Que desea realizar? \n->");
        scanf("%d",&opcion);
        if(opcion == 1){
           const char* palabra = get_random_word();
           char arreglo[strlen(palabra)];
           int sustituir[strlen(palabra)];
           clearscreen();
           printf("Ingrese su Nombre o Alias\n");
            scanf("%s",nombre);
            for(int x=0; x<strlen(palabra); x++){
              arreglo[x] = '_';
            }
            int aciertos=0;
            ciclo:
            printf("¡Bienvenido %s!\n", nombre);
            printf("Jugador: %s \nIntentos: %d/10\nAciertos: %d \nPalabra: \n", nombre, intentos,aciertos);
            printf("\n");
            
            intentos++;
            for(int x = 0; x<strlen(palabra); x++){
              printf("%c ",arreglo[x]);
            }
          printf("\n");
          int juego_terminado=0;

          while(intentos < 11){            
            printf("\n");
            printf("Ingresar letra:");
            scanf ("%s",&letras);
            for (int i=0; i < strlen(palabra); i++){
                if(letras==palabra[i]){
                  arreglo[i]=letras;
                  aciertos++;
                  //intentos++;
                }
                else{
                  intentos+1 ;
                  goto ciclo;
                }
              for(int x = 0; x<strlen(palabra); x++){
              printf("%c",arreglo[x]);
            }
            fflush(stdout);
          }
          char participantes;
            if (participantes == '0'){
              clearscreen();
              exit(0);
            } else {
              for(int i = 0; i < strlen(palabra); i ++){
                if(participantes== palabra[i]){
                  sustituir [i] = participantes;
                  aciertos ++;
                } else {}
              }
            } for (int k = 0; k<strlen(palabra);k++){
              if(palabra[k]==participantes){
                sustituir[k] = 1;
              } 
              juego_terminado = 1;
              for(int y = 0;y<strlen(palabra);y++){
                if(!sustituir[y]){
                  juego_terminado = 0;
                  break;
                }
              } 
            }
        }
        printf("Has perdido. ¿Desea volver a jugar?\n");
        intentos = 0;
      }
        
         else if (opcion == 2){
           printf("Este juego consiste en que la computadora seleccionara una palabra al azar y usted debe de adivinarla ingresando letra por letra. Con un maximo de 10 intentos.\nLas instrucciones del juego son las siguientes:\n1.Ingresar un nombre.\n2.Ingresar las letras.\n3.Al finalizar la partida puede decidir si volver a jugar o salir del juego.\n");
         }
         else if (opcion == 3){
           printf("Este juego fue elaborado por dos alumnos, Alejandro Salazar y Giancarlo Sinbaldi, de la Universidad Francisco Marroquin. La intencion de este juego es divertirse. Si tienen alguna sugerencia o comentario puede comunicarse a los siguientes correos:\n\ngiancarlosinbaldi@ufm.edu\nalejandrosalazarb@ufm.edu\n");
         }
         else if (opcion == 4){
           printf("¡Gracias por jugar!\n");
           break;
         }
    }
    
          
}

const char* get_random_word(void){
    // seed the random generator.
    srand (time(0) );
    // obtain a 0 < randon number < MAX_ WORDS
    int random_position = rand() % MAX_WORDS;
    //printf("Random number is: %i\n", random_position);
    return word_collection[random_position];
}

const char* guiones_bajos(char* a){
  int largo = strlen(a);
}

const char* jugada(char* a) {
  int largo = strlen(a);
  for (int i = 0; i<largo; i++){ 
      
  }
}