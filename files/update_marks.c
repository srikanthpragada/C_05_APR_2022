// Update marks for the given rollno
#include <stdio.h>

void main()
{
  FILE * fp;
  int rno, marks, count;

       fp = fopen("marks.dat", "r+b");  // read-write mode
       if(fp == NULL)
       {
           printf("Sorry!! File not found!");
           exit(1);
       }

       printf("Enter rollno:");
       scanf("%d", &rno);

       // Move fp to required location
       fseek(fp, (rno - 1) * sizeof(int), SEEK_SET);

       // Read marks
       count = fread(&marks, sizeof(int), 1, fp);

       if(count == 1)
       {
          printf("New marks :");
          scanf("%d", &marks);
          // Move fp to required location
          fseek(fp, (rno - 1) * sizeof(int), SEEK_SET);
          fwrite(&marks, sizeof(int), 1, fp);
       }
       else
           printf("Sorry! Invalid roll number!");

       fclose(fp);
}
