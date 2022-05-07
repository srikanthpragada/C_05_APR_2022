
#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

       fp = fopen("name.txt", "rt");
       if(fp == NULL)
       {
           printf("Sorry!! File not found!");
           exit(1);
       }

       while(1)
       {
           ch = fgetc(fp);
           if(ch == EOF)
             break;

           putch(ch);
       }
       fclose(fp);
}
