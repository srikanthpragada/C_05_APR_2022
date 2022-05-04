
struct product
{
   int id;
   char name[30];
   float price;
   int qoh;
};

void main()
{
  struct product p1;
  struct product p2 = {2, "iPad", 45000, 5};

     p1.id = 1;
     strcpy(p1.name,"Dell Laptop");
     p1.price = 80000;
     p1.qoh = 10;

     printf("%d - %s - %.2f - %d", p1.id, p1.name, p1.price, p1.qoh);

}
