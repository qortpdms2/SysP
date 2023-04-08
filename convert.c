#include <stdio.h>

int main(){
    int n, result = 0;
    scanf("%x", &n);
    
    for(int i=32768; i>=4096; i--){
        result = (n & i);
        if(result != 0) result = 1;
        printf(result);
    }
    
    for(int i=2048; i>=512; i--){
        result = (n & i);
        if(result != 0) result = 1;
        printf(result);
    }
    
    for(int i=256; i>=0; i--){
        result = (n & i);
        if(result != 0) result = 1;
        printf(result);
    }
    

    return 0;
}
