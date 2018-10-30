#include<stdio.h>
#include<math.h>

void main()

{
        int a,b,max;    /* two sides of a triangle */

        printf("Enter max value of sides a, b: ");

        scanf("%d", &max);

        for (a = 1; a <= max; a++)
        {
           for (b = a; b <= max; b++)\
              {
               float c = sqrt(a *a+ b * b); /*third side*/
               if (c == (int) c)
               printf ("%2d %2d %2d\n", a, b, (int) c);
               }

         }
}
