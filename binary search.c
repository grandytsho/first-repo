#include <stdio.h>
int main ()
{
    int a[10],i,n,j,temp;
    printf("pls enter number of elements in the array and the elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>0;i++){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
    return 0;
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