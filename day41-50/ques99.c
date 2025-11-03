#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    int day, mon, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  

    
    sscanf(date, "%d/%d/%d", &day, &mon, &year);

    if (mon < 1 || mon > 12) {
        printf("Invalid month number!\n");
        return 0;
    }

    printf("Converted date: %02d-%s-%04d\n", day, months[mon - 1], year);

    return 0;
}

