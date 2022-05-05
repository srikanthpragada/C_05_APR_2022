
enum payment { CASH, CC, UPI};
enum boolean { FALSE, TRUE};
struct sale
{
    char customer[30];
    int  amount;
    enum payment mode;
};


void main()
{
  enum payment mode;

    mode = UPI;
    printf("%d", mode);
}
