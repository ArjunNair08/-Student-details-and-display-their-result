#include <stdio.h>

// Structure definition
struct Student {
    int roll_no;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    struct Student s[100];
    int n, i;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input details for each student
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);

        // Calculate total and percentage
        s[i].total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
        s[i].percentage = s[i].total / 3.0;
    }

    // Display output in tabular format
    printf("\n-------------------------------------------------------------------------------------\n");
    printf("%-10s | %-15s | %-10s | %-10s | %-10s | %-8s | %-10s\n",
           "Roll No", "Name", "Subject: 1", "Subject: 2", "Subject: 3", "Total", "Percentage");
    printf("-------------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-10d | %-15s | %-10d | %-10d | %-10d | %-8d | %-10.2f\n",
               s[i].roll_no,
               s[i].name,
               s[i].marks[0],
               s[i].marks[1],
               s[i].marks[2],
               s[i].total,
               s[i].percentage);
    }
    printf("-------------------------------------------------------------------------------------\n");

    return 0;
}
