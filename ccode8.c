#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int available;
};

void issueBook(struct Book *b) {
    if (b->available) {
        b->available = 0;
        printf("Book '%s' issued successfully!\n", b->title);
    } else {
        printf("Book '%s' is not available!\n", b->title);
    }
}

void returnBook(struct Book *b) {
    if (!b->available) {
        b->available = 1;
        printf("Book '%s' returned successfully!\n", b->title);
    } else {
        printf("Book '%s' was not issued!\n", b->title);
    }
}

int main() {
    struct Book b1 = {1, "C Programming", 1};
    issueBook(&b1);
    issueBook(&b1);
    returnBook(&b1);
    returnBook(&b1);
    return 0;
}
