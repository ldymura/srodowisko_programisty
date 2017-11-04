#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv [])
 {
//wczytaj dane

double a[argc];

for (int i = 1; i < argc; i++){
  a[i]= atof (argv[i]);
}

//policz wyniki
double delta = a[2]*a[2]-4*a[1]*a[3];
double x1 = (-a[2]-sqrt(delta))/(2*a[1]);
double x2 = (-a[2]+sqrt(delta))/(2*a[1]);

//wypisz wyniki
printf("\n%.0f*x^2+%.0f*x+%.0f = 0 \n\n" , a[1], a[2], a[3]);

printf ("x1 = %f\n", x1);
printf ("x2 = %f\n\n", x2);

}
