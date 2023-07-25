#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argument_count, char** vector_of_parameters) {
   printf("Podaj słowo (maksymalnie 9 znaków)\n");
   char string_to_read_into[10];
   // wczytaj string za pomocą fscanf(stdin, ...
   // pamiętając o dobrym format stringu (ograniczenie maksymalnej długości)
   
   printf("Słowo, które podałeś to '%s'\n", string_to_read_into);
   // odkomentuj
   // size_t string_length = strlen(string_to_read_into);
   // czemu size_t a nie int?
   printf("Jego długość to %zu\n", string_length);

   return 0;   
}


