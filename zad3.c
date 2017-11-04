#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argf, char *argv [])
 {

printf ("argf %d\n", argf);
printf ("argv[0] %s\n", argv[0]);
printf ("argv[1] %s\n", argv[1]);
printf ("argv[2] %s\n", argv[2]);
printf ("argv[3] %s\n", argv[3]);

double a = atof (argv[1]);
double b = atof (argv[2]);
double c = atof (argv[3]);

double delta = (b*b)- (4*a*c);

double x1 = (-b-sqrt(delta))/(2*a);
double x2 = (-b+sqrt(delta))/(2*a);


printf ("delta = %f\n", delta);
printf ("x1 = %f\n", x1);
printf ("x2 = %f\n", x2);

}
