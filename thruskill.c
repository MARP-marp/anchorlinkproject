#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={1,2,1,3,2,1,2,3,3,4,4,8,9,8,8,7,6,9,3,1,2,5,4,5,4,1,2};
    int i,n,j;
    
    //printf("%d",arr[i]);
    n=arr[0];

    for(i=0; i<=26; )
    {
        printf("%d,",n);
        if(n!=arr[i])
        {
            n=arr[i];
        }
        else
        {
            i++;
        }
    }
   

    return 0;
}