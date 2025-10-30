#include <stdio.h>

int main()
{
    int n, value, is_found=0;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int my_array[n];
    printf("Enter elements:\n");
    
    for(int i = 0; i<n; i++){
        scanf("%d",&my_array[i]);      
    }

    printf("Enter the value you want to found: ");
    scanf("%d",&value);
    for(int i = 0; i<n; i++){
        if (my_array[i] == value){
            printf("%d found at index number %d\n",value,i);
            is_found = 1;
        }
    }
    if (is_found == 0){
        printf("d\nNumber not found!");
    }
    return 0;
}