#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int my_array[n];
    printf("Enter elements:\n");
    
    for(int i = 0; i<n; i++){
        scanf("%d",&my_array[i]);      
    }

    printf("The elements of array are: \n");
    for(int i = 0; i<n ; i++){
        printf("%d\n",my_array[i]);
    }
    return 0;
}