#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
//wczytaj dane
double a[4];
for (int i = 1; i < 4; i++){

  printf("podaj a[%d]=",i);
  scanf("%lf", &a[i]);

//  a[i]= atof (argv[i+1]);
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
