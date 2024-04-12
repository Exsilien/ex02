#include <stdio.h>
#include <math.h>

int main() {
  const int p = 21500;
  double radius = 0.0;
  if (scanf("%lf", &radius) && radius >= 0.0) {
    const double V = (4.0 / 3.0) * M_PI * pow(radius, 3);
    const double result = (double)p * V;
    printf("%.0lf", result);
  } 
  else printf("n/a");
  return 0;
}