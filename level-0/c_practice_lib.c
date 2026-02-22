#include "c_practice_lib.h"
#include <unistd.h>

ssize_t ft_putchar(char value) {
   return write(1, &value, 1);
}

size_t ft_strlen(char *str) {
   size_t len = 0;

   while(*str != '\0') {
      str++;
      len++;
   }

   return len;
}

void ft_swap(int* a, int* b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

ssize_t ft_putstr(char* str) {
   size_t length = ft_strlen(str);

   return write(1, str, length);
}