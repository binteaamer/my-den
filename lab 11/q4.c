#include <stdio.h>

#define NUM_STUDENTS 5
struct Marks {
    float maths;
    float science;
    float english;
};
struct Student {
    int roll_no;
    char name[50];
    struct Marks marks;
};


float Average(struct Marks marks) {
    return (marks.maths + marks.science + marks.english) / 3;
}

int main() {
    struct Student students[NUM_STUDENTS];
    int i;
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 
        printf("Marks in Maths: ");
        scanf("%f", &students[i].marks.maths);
        printf("Marks in Science: ");
        scanf("%f", &students[i].marks.science);
        printf("Marks in English: ");
        scanf("%f", &students[i].marks.english);
    }

    printf("\nStudent Average Marks:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        float average = Average(students[i].marks);
        printf("Roll No: %d, Name: %s, Average Marks: %.2f\n", 
               students[i].roll_no, students[i].name, average);
    }

    return 0;
}
