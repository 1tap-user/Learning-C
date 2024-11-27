#include <stdio.h>
int  main () {
double num1;
double num2;
char o;
printf ("enter any number");
scanf("%lf", &num1);
printf ("enter any operators");
scanf(" %c", &o);
printf ("enter any number");
scanf("%lf", &num2);


if (o == '+'){
printf("%f", num1 + num2);
}
else if(o == '-'){
printf("%f",num1 - num2);
}
else if (o == '/'){
printf ("%f", num1 / num2);
}
else if (o == '*'){
printf("%f", num1 * num2);
}
else { printf ("invalid operators");
}

}
