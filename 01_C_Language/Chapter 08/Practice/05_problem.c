// String slicing using modification (cutting / overwriting the SAME string)
// IMPORTANT: This is NOT real slicing, this is truncation + pointer shift

#include <stdio.h>

char* slice(char* , int, int);

char* slice(char* str, int m, int n){
    // ptrm holds address of m-th index of ORIGINAL string
    // NOTE: original array base address does NOT change
    char* ptrm = &str[m]; 
    
    // Only the LOCAL pointer 'str' is shifted
    // The actual array 'str1' in main is NOT moved
    str = ptrm; 
    
    // This line MODIFIES ORIGINAL STRING DATA
    // str[n-m] means: original_str[m + (n-m)] = '\0'
    // This is why the string gets CUT (truncate)
    str[n-m] = '\0';
    
    // Returning shifted pointer (view starting from m-th index)
    return str;
}

int main(){
    char str1[14] = "TUSHAR SHARMA";
    
    // ptr will point to str1[m]
    // NOT to the base address of str1
    char* ptr = slice(str1,3,6);
    
    // Prints from m-th index because ptr points there
    // Output: HAR
    printf("%s\n", ptr);
    
    // Prints from 0th index because str1 base address NEVER changed
    // But string is truncated due to '\0' overwrite
    // Output: TUSHAR
    printf("%s", str1);
    
    return 0;
}
