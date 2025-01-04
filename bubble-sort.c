#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[5]={12,55,87,24,67};
    int i,j,temp;
    clrscr();
    printf("before sorting");
    for(i=0;i<5;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[i]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    printf("\n\n after sorting \n");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}