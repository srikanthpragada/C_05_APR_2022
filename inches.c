// Display inches converted to cm and mm

#include <stdio.h>

void main()
{
   int inches = 30;
   int cm, mm;

   cm = inches * 2.54;
   mm = cm * 10;

   printf("INCHES = %d, CM = %d, MM = %d", inches, cm, mm);

}
