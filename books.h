#ifndef BOOKS_H
#define BOOKS_H

struct Book {
    int id;
    char title[50];
    char author[50];
    int isBorrowed; // 0 = còn, 1 = đang mượn
};

extern struct Book library[100];
extern int bookCount;

void addBook();
void editBook();
void deleteBook();
void listBooks();
void searchByTitle();
void searchByAuthor();

int findBookIndex(int id);

#endif
