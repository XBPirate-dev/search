#include<stdio.h>
void main()
{
 int a[50],i,n,search,f=0;
 printf("Enter the size of the array \n");
 scanf("%d",&n);
 printf("Enter elements into the array \n");
 for(i=0;i<n;i++)
     scanf("%d",&a[i]);
 printf("Enter the search element \n");
 scanf("%d",&search);
 for(i=0;i<n;i++)
 {
  if(a[i]==search)
  {
     printf("Element found at %d position \n",n);
     f=1;
  }
 }
 if(f==0)
    printf("Element not found\n");
}
