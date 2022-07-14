#include <stdio.h>
int main()
{
    int arr[10]={0},n,i,j,pos,m,new;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter new element to be inserted :");
    scanf("%d",&new);
    printf("Enter position of where new element needs to get inserted:");
    scanf("%d",&pos);
    for(j=n-1;j>=pos;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[pos]=new;
    for (i = 0; i < n+1; i++){
        printf("%d ", arr[i]);
    }
}
