#include "c_practice_lib.h"
#include <unistd.h>

ssize_t ft_putchar(const char value) {
   return write(1, &value, 1);
}

size_t ft_strlen(const char *str) {
   size_t len = 0;

   if(!str) return 0;

   while(*str != '\0') {
      str++;
      len++;
   }

   return len;
}

void ft_swap(int* a, int* b) {
   if(!a || !b) return;

   int temp = *a;
   *a = *b;
   *b = temp;
}

ssize_t ft_putstr(const char *str) {
    ssize_t total = 0;

    if (!str)
        return write(1, "(null)\n", 7);

    total += write(1, str, ft_strlen(str));
    total += write(1, "\n", 1);

    return total;
}