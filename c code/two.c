#include <stdio.h>
#include <string.h>

// Define a structure to hold employee information
struct Employee {
    char name[50];
    char designation[20];  // "Manager" or "Worker"
    int id;
    float salary;
};

// Function to write data to a file
void writeToFile(struct Employee emp[], int n, const char *designation, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Cannot open file %s\n", filename);
        return;
    }

    fprintf(file, "ID\tName\t\tDes ignation\tSalary\n");
    fprintf(file, "--------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, designation) == 0) {
            fprintf(file, "%d\t%s\t\t%s\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].designation, emp[i].salary);
        }
    }

    fclose(file);
    printf("Data of %s written to %s successfully.\n", designation, filename);
}

int main() {
    struct Employee employees[5] = {
        {"John Doe", "Manager", 101, 75000.00},
        {"Jane Smith", "Worker", 102, 45000.00},
        {"Robert Brown", "Worker", 103, 46000.00},
        {"Lucy Black", "Manager", 104, 80000.00},
        {"Michael White", "Worker", 105, 47000.00}
    };

    int n = 5;

    // Separate data into two files: managers.txt and workers.txt
    writeToFile(employees, n, "Manager", "managers.txt");
    writeToFile(employees, n, "Worker", "workers.txt");

    return 0;
}
