#include<stdio.h>

int main()
{

    int first=0, second=1, next,i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
   /* printf("%d\n",first);
    printf("%d\n",second);
    for (i=1;i<n-2;i++){
        next = first+second;
        first = second;
        second = next;
        printf("%d\n",next);*/

        for (i=0;i<=n-1;i++)
        {
            printf("%d",first);
            next=first+second;
            first=second;
            second=next;
        }
    

    return 0;
}