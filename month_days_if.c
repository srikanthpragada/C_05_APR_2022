// Find no. of days in the given month
#include <stdio.h>
void main()
{
  int month, year, nodays;

    printf("Enter month : ");
    scanf("%d",&month);

    if(month == 2)
    {
       printf("Enter year : ");
       scanf("%d",&year);
       if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            nodays = 29;
       else
          nodays = 28;
    }
    else
        if(month == 4 || month == 6 || month == 9 || month == 11)
            nodays = 30;
        else
            nodays = 31;

   printf("%d", nodays);
}

