#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argument_count, char** vector_of_parameters) {
   printf("Podaj słowo (maksymalnie 9 znaków)\n");
   char string_to_read_into[10];
   fscanf(stdin, "%9s", string_to_read_into);
   
   printf("Słowo, które podałeś to '%s'\n", string_to_read_into);
   size_t string_length = strlen(string_to_read_into);
   printf("Jego długość to %zu\n", string_length);

   return 0;   
}


