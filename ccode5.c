#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int n = 0, choice;

    while (1) {
        printf("\n1. Add Student\n2. View Students\n3. Search Student\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (n < 5) {
                printf("Enter ID: "); scanf("%d", &students[n].id);
                printf("Enter Name: "); scanf("%s", students[n].name);
                printf("Enter Marks: "); scanf("%f", &students[n].marks);
                n++;
            } else {
                printf("Limit reached!\n");
            }
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                printf("%d %s %.2f\n", students[i].id, students[i].name, students[i].marks);
            }
        } else if (choice == 3) {
            int id; printf("Enter ID to search: "); scanf("%d", &id);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (students[i].id == id) {
                    printf("Found: %s %.2f\n", students[i].name, students[i].marks);
                    found = 1; break;
                }
            }
            if (!found) printf("Not found!\n");
        } else break;
    }
    return 0;
}
