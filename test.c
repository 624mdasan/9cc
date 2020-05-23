#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
  }

//  printf("atoi(argv[0])： %d\n", atoi(argv[0]));
  printf("atoi(argv[1])： %s\n", argv[1]);

  char *p = argv[1];
  printf("s p： %s\n", p);
  printf("p &p： %p\n", &p);
  printf("d *p： %\n", *p);

  printf("strtol(p, &p, 10)： %ld\n", strtol(p, &p, 10));

  printf("s p： %s\n", p);
  printf("p &p： %p\n", &p);
  printf("d *p： %d\n", *p);

  printf("strtol(p, &p, 10)： %ld\n", strtol(p, &p, 10));

  printf("s p： %s\n", p);
  printf("p &p： %p\n", &p);
  printf("d *p： %d\n", *p);

  return 0;
}
