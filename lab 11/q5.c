#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char event_name[100];
    struct Date date;
    char location[100];
};

int main() {
    int num_events, i;

    printf("Enter the number of events: ");
    scanf("%d", &num_events);


    struct Event events[num_events];

    for (i = 0; i < num_events; i++) {
        printf("\nEnter details for event %d:\n", i + 1);
        printf("Event name: ");
        scanf(" %[^\n]s", events[i].event_name); 
        printf("Date (DD MM YYYY): ");
        scanf("%d %d %d", &events[i].date.day, &events[i].date.month, &events[i].date.year);
        printf("Location: ");
        scanf(" %[^\n]s", events[i].location);
    }
    printf("\nEvent Details:\n");
    for (i = 0; i < num_events; i++) {
        printf("Event %d:\n", i + 1);
        printf("  Name: %s\n", events[i].event_name);
        printf("  Date: %02d/%02d/%04d\n", events[i].date.day, events[i].date.month, events[i].date.year);
        printf("  Location: %s\n", events[i].location);
        printf("\n");
    }

    return 0;
}
