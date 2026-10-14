#include<stdio.h>
struct employee
{
int id;
char name[50];
float salary;
};
int main()
{
struct employee emp[5];
int n,i;
printf("enter no.of employees:");
scanf("%d",&n);
for(i=0; i<n; i++)
{
printf("\n enter details of employee %d\n",i+1);
printf("id:");
scanf("%d",&emp[i].id);
printf("name:");
scanf("%s",emp[i].name);
printf("salary:");
scanf("%f",&emp[i].salary);
}
printf("\n employee details\n");
for(i=0; i<n; i++)
{
printf("\n employee %d\n",i+1);
printf("id:%d\n",emp[i].id);
printf("name:%s\n",emp[i].name);
printf("salary:%2f\n",emp[i].salary);
}
return 0;
}
