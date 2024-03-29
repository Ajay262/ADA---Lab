#include<stdio.h>
void quicksort(int arr[50],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(arr[i]<=arr[pivot] && i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j)
	 {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
}

int main()
{
   int i, count, arr[50];

   printf("\nEnter the number of elements : ");
   scanf("%d",&count);

   printf("\nEnter the elements: ");
   for(i=0;i<count;i++)
      scanf("%d",&arr[i]);

   quicksort(arr,0,count-1);

   printf("\nThe Sorted elements are : ");
   for(i=0;i<count;i++)
      printf(" %d \n",arr[i]);

   return 0;
}
