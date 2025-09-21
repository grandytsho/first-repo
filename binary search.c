#include <stdio.h>
int main ()
{
    int find,pos=-1;
    int low=0,high=n-1,mid;
    printf("enter a number to be found ");
    scanf("%d",&find);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==find){
            pos=mid;
            break;
        }
        else if(a[mid]>find){
            high=mid-1;
        }
        else{ 
            low=mid+1;
        }
    }
    if(pos==-1)
    printf("the number %d was not found in the array",find);
    else 
    printf("the number %d was found at %d ",find,(pos+1));
    return 0;
}