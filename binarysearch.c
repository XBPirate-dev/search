#include<stdio.h>
void main()
{
 int a[50],n,i,search,low,mid,high,f=0,j,k,temp;
 printf("Enter the size of the array \n");
 scanf("%d",&n);
 printf("Enter elements into the array \n");
 for(i=0;i<n;i++)
     scanf("%d",&a[i]);
 for(j=0;j<n-1;j++)
 {
  for(k=0;k<n-1-j;k++)
  {
   if(a[k]>a[k+1])
   {
    temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
   }
  }
 }
 printf("The inputted array is \n");
 for(i=0;i<n;i++)
     printf("%d \t \n",a[i]);	
 printf("Enter the search element \n");
 scanf("%d",&search);
 low=0;
 high=n;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(a[mid]==search)
  {
    printf("Element found at %d position \n",(mid+1));
    f=1;
    break;
  }
 else if(search<a[mid])
    high=mid-1;
 else
    low=mid+1;
 }
 if(f==0)
    printf("Element not found \n");
}
