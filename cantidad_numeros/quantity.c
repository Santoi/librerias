#include "quantity.h"
#include <stdlib.h>
#include <stdio.h>

size_t quantity (void) {
 size_t i = 0;
 char str [4];
 char * endp;
 puts (MSG_QUANT_NUM);
 fgets (str, 4, stdin);
 i = strtol (str, &endp, 10);
 if (*endp && *endp != '\n')
  return 0;
 return i;
}
