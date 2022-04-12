// Find discount rate based on product code

#include <stdio.h>
void main()
{
  int code = 1, disrate;

    switch(code)
    {
        case 1 : disrate = 10;
                 break;
        case 2 : disrate = 15;
                 break;
        case 3 :
        case 4 : disrate = 25;
                 break;
        case 5 : disrate = 20;
                 break;
        default: disrate = 5;
    }

    printf("Discount rate = %d", disrate);
}
