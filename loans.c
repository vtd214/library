#include <stdio.h>
#include "books.h"
#include "users.h"

void borrowBook() {
    int userId, bookId;
    printf("ID nguoi dung: "); scanf("%d", &userId);
    printf("ID sach: "); scanf("%d", &bookId);

    int ui = findUserIndex(userId);
    int bi = findBookIndex(bookId);

    if(ui == -1 || bi == -1){ printf("❌ Du lieu khong hop le!\n"); return; }
    if(library[bi].isBorrowed){ printf("❌ Sach da duoc muon!\n"); return; }
    if(users[ui].borrowCount >= 10){ printf("❌ Muon toi da 10 sach!\n"); return; }

    library[bi].isBorrowed = 1;
    users[ui].borrowedBooks[ users[ui].borrowCount++ ] = bookId;

    printf("✅ Muon sach thanh cong!\n");
}

void returnBook() {
    int userId, bookId;
    printf("ID nguoi dung: "); scanf("%d", &userId);
    printf("ID sach: "); scanf("%d", &bookId);

    int ui = findUserIndex(userId);
    int bi = findBookIndex(bookId);

    if(ui == -1 || bi == -1){ printf("❌ Du lieu khong hop le!\n"); return; }

    library[bi].isBorrowed = 0;
    users[ui].borrowCount--;

    printf("✅ Tra sach thanh cong!\n");
}
