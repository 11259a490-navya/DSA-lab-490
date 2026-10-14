#include<stdio.h>
int main()
{
int arr[100],n,i,pos,element;
printf("enter the no.of elements:");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position to insert(1 to &d):", n+1);
scanf("%d",&pos);
printf("enter the element to insert:");
scanf("%d",&element);
for(i=n; i>=pos; i--)
{
arr[i]=arr[i-1];
}
arr[pos-1]=element;
n++;
printf("array after insertion:\n");
for(i=0; i<n; i++)
{
printf("%d",arr[i]);
}
return 0;
}
