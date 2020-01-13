#include <stdio.h>
int main () {
  FILE *fp = fopen("numbers.dat", "w");
  for (int i = 0; i < 2048; i++)
    fprintf(fp, "%d\n", i);
  close(fp);
  return 0;
}
