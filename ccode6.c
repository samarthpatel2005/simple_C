#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks[5];
    float average;
};

void calculateAverage(struct Student *s) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s->marks[i];
    }
    s->average = sum / 5.0;
}

char grade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

int main() {
    struct Student s = {"Samarth", {85, 92, 76, 88, 90}, 0};
    calculateAverage(&s);

    printf("Student: %s\n", s.name);
    printf("Average: %.2f\n", s.average);
    printf("Grade: %c\n", grade(s.average));
    return 0;
}
