#include <stdio.h>

int main(){

    if(1){
	printf("6This is non Zero IF hence it is executed\n");
    }
    if(2345){
	printf("5This is non Zero IF hence it is executed\n");
    }
    if(23.45){ 
        printf("4This is non Zero IF hence it is executed\n");
    }
    if('x'){ 
        printf("3This is non Zero IF hence it is executed\n");
    }
    // if('xyz'){ 
    //     printf("2This is non Zero IF hence it is executed\n");
    // } This will not give error but give warning because it is not intentionally used in c because it is useless
    if(0){ 
        printf("1This is non Zero IF hence it is executed\n");
    }
}
