#include <stdio.h>
#include <stdlib.h>
struct Address {
    char city[50];
    int zip_code;
};
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Address address;
};

int main() {
    int num_employees, i;
    FILE *file;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);
    struct Employee employees[num_employees];
    for (i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name); 
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("City: ");
        scanf(" %[^\n]s", employees[i].address.city);
        printf("Zip Code: ");
        scanf("%d", &employees[i].address.zip_code);
    }
    file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    fwrite(employees, sizeof(struct Employee), num_employees, file);
    fclose(file);

    printf("\nEmployee details have been saved to 'employees.dat'.\n");
    file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    struct Employee read_employees[num_employees];
    fread(read_employees, sizeof(struct Employee), num_employees, file);
    fclose(file);
    printf("\nEmployee Details from File:\n");
    for (i = 0; i < num_employees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Name: %s\n", read_employees[i].name);
        printf("  ID: %d\n", read_employees[i].id);
        printf("  Salary: %.2f\n", read_employees[i].salary);
        printf("  Address: %s, %d\n", read_employees[i].address.city, read_employees[i].address.zip_code);
        printf("\n");
    }

    return 0;
}
