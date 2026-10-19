# include <stdio.h>

enum Day {MONDAY, TUESDAY, WEDNESDAY, THRIRSDAY, FRIDAY, SATURDAY, SUNDAY};
enum Day d = MONDAY;
const char *names[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
double sum = 0;
double spent[7];

void daily_spending(void) {
    printf("--------------------------------------\n");
    for (d = MONDAY; d <= SUNDAY; d++) {
        printf("Enter %s's spending: ", names[d]);
        scanf("%lf", &spent[d]);
        printf("\n");
    }
    printf("--------------------------------------\n");
}


void status (const double daily_limit) {
    printf("Day\t\tSpent\t\tStatus\n--------------------------------------\n");
    for (d = MONDAY; d <= SUNDAY; d++) {
        if (spent[d] <= daily_limit) printf("%-15s %-16.2lf OK\n", names[d], spent[d]);
        else printf("%-15s %-16.2lf OVER\n", names[d], spent[d]);  
        sum += spent[d];
    }    
    printf("--------------------------------------\n");
}

void budget_check(const double weekly_limit){
    if (sum > weekly_limit) printf("Total: %.2lf \nAverage: %.2lf \nYou went OVER your budget this week. \nYou spent %.2lf more than your budget.\n", sum , (sum/7), abs(weekly_limit-sum));
    else printf("Total: %.2lf \nAverage: %.2lf \nYou stayed WITHIN your budget this week.\n", sum , (sum/7));

}


int main (void) {
    double daily_limit; 
    printf("What is your daily limit: ");
    scanf("%lf", &daily_limit);
    daily_spending(); 
    status(daily_limit);
    budget_check(daily_limit * 7);
}