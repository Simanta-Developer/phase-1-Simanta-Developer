#include<stdio.h>

int find_mini_index(int arr[], int start, int end)
{
    int i;
    int mini_index = start;
    for(i=start+1; i<=end; i++)
    {
        if(arr[mini_index]>arr[i])
        mini_index = i;
    }
    return  mini_index;
}
 
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}



void selectionsort(int arr[], int start, int end)
{
    int i,x, mini_index;

    for(i=start; i<=end; i++)
    {
        mini_index=i;
        x=find_mini_index(arr,i,end);
        swap(&arr[mini_index],& mini_index);
    }

}




void main()
{
    
    int arr[5];
    int i;
    
    printf("Enter 5 elements in array :");
    for (i=0 ; i<=4 ; i++)
        scanf("%d",&arr[i]);
  
    selectionsort(arr,0,5);
    printf("Sorted array id : %d\n", arr[5]);
}
