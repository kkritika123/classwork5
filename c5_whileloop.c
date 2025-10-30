#include <stdio.h>

int main() {
    int n, units;
    double rate, bill;
    double total , highest, lowest;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    int i = 1; 

    while (i <= n) {
        printf("\nEnter units consumed by customer %d: ", i);
        scanf("%d", &units);

        
        if (units <= 100)
            rate = 0.50;
        else if (units <= 300)
            rate = 0.75;
        else if (units <= 600)
            rate = 1.20;
        else
            rate = 1.50;

        
        bill = units * rate + 20;

        if (bill > 500)
            bill = bill + (bill * 0.10);

        printf("Total bill for customer %d: $%.2f\n", i, bill);

        total += bill;
        if (i == 1) {
            highest = lowest = bill;
        } else {
            if (bill > highest) highest = bill;
            if (bill < lowest)  lowest = bill;
        }

        i++;
    }

    
    printf("Average bill: $%.2f\n", total / n);
    printf("Highest bill: $%.2f\n", highest);
    printf("Lowest bill: $%.2f\n", lowest);

    return 0;
}

