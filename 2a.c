#include<stdio.h>
void main()
{
     int a[10], n, i, j, k, min, temp;
     printf("\n Enter the number of elements ");
     scanf("%d", &n);
     printf("\n Enter the elements of the array : ");
     for(i=0;i<n;i++)
     scanf("%d", &a[i]);
     for(i=0;i<n-1;i++)
     {
	min=i;
	for(j=i+1;j<n;j++)
	{
	if(a[min]>a[j])
	{
	   min=j;	
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	}
	}
     }
     printf("\n The sorted elements of the array : ");
     for(i=0;i<n;i++)
	printf(" %d  ",a[i]);
     printf("\n Enter the value of k to print the kth smallest element to be printed : ");
     scanf("%d", &k);
     printf("%d \n", a[k-1]);
}

/*   ************ OUTPUT *********

Enter the number of elements 5

 Enter the elements of the array : 10
-1
0
5
-2

 The sorted elements of the array :  -2   -1   0   5   10  
 Enter the value of k to print the kth smallest element to be printed : 3
  0 

*/
