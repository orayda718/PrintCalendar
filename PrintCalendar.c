/* 
* Name: Orayda Shagifa
* Purpose: Prints a one-month calendar. The user specifies the number 
* of days in the month and the day of the week on which the month begins 
*/

#include <stdio.h>

int main(void){
    int daysMonth, startDay, currDay;

    printf("Enter number of days in month: ");
    scanf("%d", &daysMonth);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    // print spaces until startDay
    for (int i = startDay; i > 1; i--) {
        printf("   ");
    }

    // print numbers for the first row
    for (int i = 1; i <= (8 - startDay); i++) {
        printf("%2d ", i);
        currDay = i;
    }

    printf("\n");
    
    int count = 0;
    for (int i = currDay + 1; i <= daysMonth; i++) {
        printf("%2d ", i);

        count++;

        if (count % 7 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
