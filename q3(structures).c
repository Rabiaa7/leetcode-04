#include <stdio.h>

struct Student {
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};

int main() {
    struct Student student;
    
    // Read input
    scanf("%d", &student.age);        // Read the age
    scanf("%s", student.first_name);  // Read the first name
    scanf("%s", student.last_name);   // Read the last name
    scanf("%d", &student.standard);   // Read the standard
    
    // Output the student's details
    printf("%d %s %s %d\n", student.age, student.first_name, student.last_name, student.standard);
    
    return 0;
}

