#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,j,temp,n,key,low=0,found=0,mid,arr[100];
   printf("Enter the number of elements:\n");
   scanf("%d",&n);
   int high=n-1;
   printf("Enter the elements:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
              }
        }
    }
   printf("Enter element to search:\n");
   scanf("%d",&key);
   while(low<=high)
   {
       mid=(low+high)/2;
       if(arr[mid]==key)
       {
          printf("Element %d found at position %d.\n",key,mid+1);
          found=1;
          break;
       }
       else if(key<arr[mid])
       {
          high = mid-1;
       }
       else
       {
          low=mid+1;
       }
   }
   if(!found)
   {
       printf("Element not found,\n");
   }
    return 0;
}
