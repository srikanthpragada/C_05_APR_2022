
void zero(int * p)
{
    *p = 0;
}

void main()
{
   int a = 100;

      zero(&a);
      printf("%d", a);
}
