#include <stdio.h>

int main(){

   int  units, n;
   double rate, bill, total, highest, lowest;

    printf("Enter number of customers(n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number of electricity units consumed (in kilowatthours, kWh). %d: ",i);
        scanf("%d", &units);

        if (units <= 100)
            rate = 0.50;
        else if (units <= 300)
            rate = 0.75;
        else if (units <= 600)
            rate = 1.20;
        else
            rate = 1.50;

        bill = (units * rate) + 20;

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
    }

    printf("Average bill: $%.2f\n", total / n);
    printf("\nHighest bill: $%.2f\n", highest);
    printf("\nLowest bill: $%.2f\n", lowest);

    return 0;
}
