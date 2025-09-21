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
    
}