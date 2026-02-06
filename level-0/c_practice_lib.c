#include "c_practice_lib.h"
#include <unistd.h>

ssize_t ft_putchar(char value) {
   return write(1, &value, 1);
}

