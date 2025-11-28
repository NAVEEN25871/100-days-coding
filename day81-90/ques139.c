#include <stdio.h>


enum Status {
    SUCCESS = 10,   
    FAILURE,        
    TIMEOUT = 20,  
    UNKNOWN         
};

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    printf("UNKNOWN = %d\n", UNKNOWN);

    return 0;
}
