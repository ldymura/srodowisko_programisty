#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv [])
 {

double a[4];

a[1] = atof (argv[1]);
a[2] = atof (argv[2]);
a[3] = atof (argv[3]);

for (int i = 0; i < 4; i++){
  a[i]= atof (argv[i+1]);
}

double delta = a[2]*a[2]-4*a[1]*a[3];
double x1 = (-a[2]-sqrt(delta))/(2*a[1]);
double x2 = (-a[2]+sqrt(delta))/(2*a[1]);


printf("\n%.0f*x^2+%.0f*x+%.0f = 0 \n\n" , a[1], a[2], a[3]);

printf ("x1 = %f\n", x1);
printf ("x2 = %f\n\n", x2);

}
