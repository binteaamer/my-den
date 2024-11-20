/*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char package_name[50];
    char destination[50];
    int duration;
    float cost;
    int seats_available;
} travel;

void displayPackages(travel packages[], int n);
void bookPackage(travel packages[], int n);

int main() {
    travel packages[] = {
        {"Tropical Paradise Escape", "Maldives", 7, 1500.00, 10},
        {"Adventure Trails Explorer", "New Zealand", 5, 1200.00, 5},
        {"Cultural Heritage Voyage", "Italy", 10, 2000.00, 8},
        {"Luxury Getaway Retreat", "Dubai", 4, 1800.00, 6},
        {"Family Fun Fiesta", "Disneyland", 3, 900.00, 15}
    };
    int n = sizeof(packages) / sizeof(packages[0]);

    printf("Welcome to the Travel Booking System!\n");
    displayPackages(packages, n);
    bookPackage(packages, n);

    printf("\nUpdated Package List After Booking:\n");
    displayPackages(packages, n);

    return 0;
}

void displayPackages(travel packages[], int n) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < n; i++) {
        printf("Package %d:\n", i + 1);
        printf("  Name: %s\n", packages[i].package_name);
        printf("  Destination: %s\n", packages[i].destination);
        printf("  Duration: %d days\n", packages[i].duration);
        printf("  Cost: $%.2f\n", packages[i].cost);
        printf("  Seats Available: %d\n\n", packages[i].seats_available);
    }
}

void bookPackage(travel packages[], int n) {
    char package_name[50];
    printf("\nEnter the package name you want to book: ");
    getchar();  
    fgets(package_name, sizeof(package_name), stdin);
    package_name[strcspn(package_name, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(packages[i].package_name, package_name) == 0) {
            found = 1;
            if (packages[i].seats_available > 0) {
                packages[i].seats_available--; 
                printf("\nBooking confirmed for package: %s\n", packages[i].package_name);
            } else {
                printf("\nSorry, no seats available for package: %s\n", packages[i].package_name);
            }
            break;
        }
    }

    if (!found) {
        printf("\nPackage not found. Please check the name and try again.\n");
    }
}

