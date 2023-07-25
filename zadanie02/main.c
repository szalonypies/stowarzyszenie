#include <stdio.h>
#include <stdlib.h>

int main(int argument_count, char** vector_of_parameters) {
   printf("Podaj liczbę\n");
   char string_to_read_into[10];
   // wczytaj to co użytkownik wpisze na konsoli za pomocą fscanf(stdin, ...) 
   
   // zamień string_to_read_into na liczbę typu int
   // int number = atoi(...

   printf("Liczba, którą podałeś to %d\n", number);
   if (number % 2 == 0) {
       printf("Jest ona liczbą parzystą\n");
   }
   else {
       printf("Jest ona liczbą nieparzystą\n");
   }

   return 0;   
}


