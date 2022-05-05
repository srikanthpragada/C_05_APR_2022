
struct time
{
   int h,m,s;
};


void main()
{
  struct time times[10];
  int i;

    srand(time(0));
    for(i = 0; i < 10; i ++)
    {
        times[i].h = rand() % 24;
        times[i].m = rand() % 60;
        times[i].s = rand() % 60;
        printf("%02d:%02d:%02d\n", times[i].h, times[i].m, times[i].s);
    }
}
