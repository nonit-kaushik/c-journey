#include <stdio.h>

int main()
{
    int size, current_size=0;
    printf("Enter the size of required array: ");
    scanf("%d", &size);

    int my_array[size];
    int choice = 1;

    while(choice != 0){
        printf("\nPress 0 to Exit.\n");
        printf("Press 1 to insert.\n");
        printf("Press 2 to update.\n");
        printf("Press 3 to delete.\n");
        printf("Press 4 to print.\n");
        scanf("%d",&choice);
        int value = 0 ;
        int index, value_up;
        switch (choice){
            case 0:
                printf("Exiting the program...");
                break;
            case 1:
                if(current_size == size) {
                    printf("Array full! Cannot insert.\n");
                    break;
                }
                else {
                    printf("Enter Your Value: ");
                    scanf("%d",&value);
                    my_array[current_size] = value;
                    current_size++;
                    break;
                }
                
            case 2:
                printf("Enter the index: ");
                scanf("%d",&index);
    
                if(index < 1 || index > current_size) {
                    printf("Invalid index!\n");
                    break;
                }
              
                else {
                    printf("Enter Your Updated value: ");
                    scanf("%d",&value_up);
                    my_array[index-1] = value_up;
                    break;
                }

            case 3:
                printf("Enter the index whose value has to be deleted: ");
                scanf("%d",&index);
                
                if(index < 1 || index > current_size) {
                    printf("Invalid index!\n");
                    break;
                }

                else {
                    for(int i = index-1; i < current_size - 1; i++) {
                        my_array[i] = my_array[i+1];
                    }
                    current_size--;
                    break;
                }

            case 4:
                for(int i = 0;i<current_size;i++){
                    printf("%d\n",my_array[i]);
                }
                break;
            
            default:
                printf("Enter a valid key.");
                break;
        }
    }

    return 0;
}