#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status currentStatus;

    currentStatus = SUCCESS;

    switch(currentStatus) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Please check your connection.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
