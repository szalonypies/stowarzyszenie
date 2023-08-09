#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void printuj_tablice(char* tab, int rozmiar) {
   printf("tablica: {");
   for (int i=0; i<rozmiar; i++) {
      printf("[%d]=%d ", i, *(tab+i));
   }
   printf("}\n");
}

void trzecia_tablica_bedzie_dynamiczna(int rozmiar) {
   int x = 0;
   char tab_dyn[rozmiar];
   for (int i=0; i<rozmiar; i++) {
      tab_dyn[i] = 'a' + i;
   }
   char* tab_malloc = malloc(rozmiar*sizeof(char));
   for (int i=0; i<rozmiar; i++) {
      tab_malloc[i] = 'a' + i;
   }

   printf("Moja Lokalna zmienna ma adres %p\n", &x);
   printf("Moja TRZECIA dynamiczna (lokalna) tablica ma %d elementów...\n", rozmiar);
   printf("Adres tej TRZECIEJ tablicy to %p\n", tab_dyn); // nie dajemy tutaj & bo zmienna typu tablicowego jest wskaźnikiem
   printuj_tablice(tab_dyn, rozmiar);
   printf("Moja CZWARTA dynamiczna (malloc) tablica ma także %d elementów...\n", rozmiar);
   printf("Adres tej CZWARTEJ tablicy to %p i jest całkowicie inny od poprzednich.\n", tab_malloc); // nie dajemy tutaj & bo zmienna typu tablicowego jest wskaźnikiem
   printf("To dlatego, że jest alokowana na stercie a nie na stosie\n");
   printuj_tablice(tab_malloc, rozmiar);
   free(tab_malloc); // musimy pamiętać o uwalnianiu malloc-owanych struktur
}

void druga_tablica_statyczna() {
   char tab2[10] = {'i', 'j','k','l','m','n','o','p'};
   printf("Moja DRUGA lokalna tablica ma także 10 elementów...\n");
   printf("Adres tej DRUGIEJ tablicy to %p\n", tab2); // nie dajemy tutaj & bo zmienna typu tablicowego jest wskaźnikiem
   printuj_tablice(tab2, 10);
   trzecia_tablica_bedzie_dynamiczna(20);
}


void tablica_statyczna() {
   char tab[10] = {'a', 'b','c','d','e','f','g','h'};
   printf("Moja lokalna tablica ma 10 elementów. Pierwsze 8 zostały zainicjalizowane a reszta jest ustawiona na 0.\n");
   printf("Adres tej tablicy to %p\n", tab); // nie dajemy tutaj & bo zmienna typu tablicowego jest wskaźnikiem
   printuj_tablice(tab, 10);
   druga_tablica_statyczna();  
}
int main(int argument_count, char** vector_of_parameters) {
   int zmienna = 3;
   printf("Moja lokalna zmienna = %d, adres = %p\n", zmienna, &zmienna);
   tablica_statyczna();
   return 0;
}

