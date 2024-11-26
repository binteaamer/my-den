#include <stdio.h>
struct Company {
    char name[100];
    int year_established;
    char departments[5][50]; 
};

int main() {
    struct Company company;
    int num_departments, i;
    printf("Enter company name: ");
    scanf(" %[^\n]s", company.name); 
    printf("Enter year established: ");
    scanf("%d", &company.year_established);
    do {
        printf("Enter the number of departments (up to 5): ");
        scanf("%d", &num_departments);
        if (num_departments < 1 || num_departments > 5) {
            printf("Invalid number! Please enter a value between 1 and 5.\n");
        }
    } while (num_departments < 1 || num_departments > 5);
    for (i = 0; i < num_departments; i++) {
        printf("Enter name of department %d: ", i + 1);
        scanf(" %[^\n]s", company.departments[i]);
    }
    printf("\nCompany Details:\n");
    printf("Name: %s\n", company.name);
    printf("Year Established: %d\n", company.year_established);
    printf("Departments:\n");
    for (i = 0; i < num_departments; i++) {
        printf("  %d. %s\n", i + 1, company.departments[i]);
    }

    return 0;
}
