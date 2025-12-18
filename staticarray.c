#include<stdio.h>
#define size 6
int main()
{ 
    int  i,pos,ele;
    int arr[size];
//traversing
    printf("enter array");
    for(i=0;i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
     
    for(i=0;i<size;i++)
     {
        printf("%d\t",arr[i]);
     }
//insertion
    printf("\nenter element");
    scanf("%d",&ele);
    printf("\nenter position");
    scanf("%d",&pos);
    for(i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    for(i=0;i<=size;i++)
     {
        printf("%d\t",arr[i]);
     }
     //deletion
    printf("\nenter position");
    scanf("%d",&pos);
    for(i=pos;i<=size;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<=size;i++)
     {
        printf("%d\t",arr[i]);
     }
//searching
    printf("\nenter element");
    scanf("%d",&ele);
     for(i=0;i<=size;i++)
     {
        if(arr[i]=ele)
        {
 	   printf("match found %d=%d",ele,arr[i]);
           break;
        }
        else
       { 
              printf("match not found");
        }
     }






     return 0;
}





