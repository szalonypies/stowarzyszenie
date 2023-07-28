#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int szesnastkowy_na_dziesiętny(char* hex) {
   int sum = 0;
   for (int i=0; hex[i] != 0; i++) {
      // stosując algorytm hornera oblicz i zwróć za pomocą return wartość
      // dziesiętną liczby 16-tkowej
   }
}

#define ASSERT_EQUALS_INT(expected, given) if (expected != given) { printf("Expected value %d but given %d on %s:%d\n", expected, given, __FILE__, __LINE__); }

int main(int argument_count, char** vector_of_parameters) {
   ASSERT_EQUALS_INT(0, szesnastkowy_na_dziesiętny("0"));
   ASSERT_EQUALS_INT(1, szesnastkowy_na_dziesiętny("1"));
   ASSERT_EQUALS_INT(5, szesnastkowy_na_dziesiętny("5"));
   ASSERT_EQUALS_INT(9, szesnastkowy_na_dziesiętny("9"));
   ASSERT_EQUALS_INT(10, szesnastkowy_na_dziesiętny("a"));
   ASSERT_EQUALS_INT(10, szesnastkowy_na_dziesiętny("0xa"));
   ASSERT_EQUALS_INT(15, szesnastkowy_na_dziesiętny("f"));
   ASSERT_EQUALS_INT(15, szesnastkowy_na_dziesiętny("0xf"));
   ASSERT_EQUALS_INT(15, szesnastkowy_na_dziesiętny("f"));
   ASSERT_EQUALS_INT(16, szesnastkowy_na_dziesiętny("0x10"));
   ASSERT_EQUALS_INT(256, szesnastkowy_na_dziesiętny("0x100"));
   ASSERT_EQUALS_INT(1027296, szesnastkowy_na_dziesiętny("face book"));
   ASSERT_EQUALS_INT(-559038737, szesnastkowy_na_dziesiętny("0xdeadbeef"));
   printf("Wszystkie testy przeszły pomyślnie\n");

   return 0;   
}

