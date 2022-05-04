
struct time
{
   int h,m,s;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d ", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

struct time max(strut time t1, struct time t2)
{
    return totalseconds(t1) >= totalseconds(t2) ? t1 : t2;
}

void main()
{
  struct time times[5];
  struct time t1 =  {11};


     times[0].h = 1;
     times[0].m = 9;
     times[0].s = 20;

     print(times[0]);
     print(t1);

}
