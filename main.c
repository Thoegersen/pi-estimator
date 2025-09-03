#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int total = 1000000, inside = 0;
  srand(time(0));
  for (int j = 0; j < total; j++) {
    double x = (double)rand() / RAND_MAX;
    double y = (double)rand() / RAND_MAX;
    if (x * x + y * y <= 1)
      inside++;
  }
  double pi = 4.0 * inside / total;
  printf("Estimated pi: %f\n", pi);
}