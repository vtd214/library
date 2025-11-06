#include <stdio.h>
#include <string.h>
#include "books.h"

struct Book library[100];
int bookCount = 0;

int findBookIndex(int id) {
    for(int i = 0; i < bookCount; i++)
        if(library[i].id == id) return i;
    return -1;
}

void addBook() {
    struct Book b;
    printf("Nhap ID sach: "); scanf("%d", &b.id);
    printf("Nhap ten sach: "); scanf("%s", b.title);
    printf("Nhap ten tac gia: "); scanf("%s", b.author);
    b.isBorrowed = 0;
    library[bookCount++] = b;
    printf("✅ Them sach thanh cong!\n");
}

void editBook() {
    int id;
    printf("Nhap ID sach can sua: "); scanf("%d", &id);
    int i = findBookIndex(id);
    if(i == -1){ printf("❌ Sach khong ton tai!\n"); return; }
    printf("Nhap ten moi: "); scanf("%s", library[i].title);
    printf("Nhap tac gia moi: "); scanf("%s", library[i].author);
    printf("✅ Sua thanh cong!\n");
}

void deleteBook() {
    int id;
    printf("Nhap ID sach can xoa: "); scanf("%d", &id);
    int i = findBookIndex(id);
    if(i == -1){ printf("❌ Sach khong ton tai!\n"); return; }
    if(library[i].isBorrowed == 1){ printf("❌ Sach dang duoc muon, khong xoa duoc!\n"); return; }
    library[i] = library[bookCount-1];
    bookCount--;
    printf("✅ Xoa sach thanh cong!\n");
}

void searchByTitle() {
    char key[50];
    printf("Nhap tieu de: "); scanf("%s", key);
    for(int i = 0; i < bookCount; i++)
        if(strstr(library[i].title, key))
            printf("ID: %d | %s - %s\n", library[i].id, library[i].title, library[i].author);
}

void searchByAuthor() {
    char key[50];
    printf("Nhap tac gia: "); scanf("%s", key);
    for(int i = 0; i < bookCount; i++)
        if(strstr(library[i].author, key))
            printf("ID: %d | %s - %s\n", library[i].id, library[i].title, library[i].author);
}

void listBooks() {
    printf("\n--- Danh sach sach ---\n");
    for(int i = 0; i < bookCount; i++)
        printf("ID: %d | %s - %s | %s\n",
            library[i].id,
            library[i].title,
            library[i].author,
            library[i].isBorrowed ? "Dang muon" : "Con trong");
}
