#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void stos2(int b) {
   int* addr_b = &b;
   printf("Tu stos2. Będziemy manipulować.\n");
   printf("Stos2 - b=%d a addr_b to %p\n", *addr_b, addr_b);

   printf("Cofamy się na stosie o 12 intów. Stos jest pisany od końca, więc musimy dodać\n");
   addr_b = addr_b + 12; // sizeof(int) = 4 więc przesuwamy się o 4 * 12 = 48 bajtów

   printf("b wskazuje na %p a wartość pod tym adresem to %d\n", addr_b, *addr_b);
   printf("Nie dość, że ukradliśmy jego wartość, to jeszcze ją podmienimy na 16\n");
   *addr_b = 16;

   printf("I wracamy\n");
}

void stos1(int a) {
   printf("tu stos1. Moja zmienna a=%d addr_a=%p\n", a, &a);
   stos2(3);
   printf("tu stos1. Moja a=%d - ktoś mi podmienił wartość?\n", a);
}

int main(int argument_count, char** vector_of_parameters) {
   stos1(4);
   return 0;
}

