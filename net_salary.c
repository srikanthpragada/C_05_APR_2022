// Calculate net salary
#include <stdio.h>

void main()
{
  int salary, hra, da, pf, net_salary;

    printf("Enter salary :");
    scanf("%d",&salary);

    hra =  salary * 30 / 100;
    da = salary * 20 / 100;
    pf = salary * 3 / 100;

    net_salary = salary + hra + da - pf;

    printf("Net salary %d", net_salary);
}
