// Print lines with line numbers
#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[100], *p;
  int lineno = 1;

       if(argc < 2)
       {
          printf("Sorry! Filename is missing. Please provide filename!");
          exit(2);
       }

       fp = fopen(argv[1], "rt");
       if(fp == NULL)
       {
           printf("Sorry!! File %s not found!", argv[1]);
           exit(1);
       }

       while(1)
       {
           p = fgets(line,100,fp);
           if (p == NULL)  // EOF
            break;

           printf("%03d: %s",lineno, line);
           lineno ++;
       }

       fclose(fp);
}
