#include <stdio.h>
#include "books.h"
#include "users.h"
#include "loans.h"

int main() {
    int c;
    while(1) {
        printf("\n===== MENU =====\n");
        printf("1. Them sach\n2. Sua sach\n3. Xoa sach\n4. Them nguoi dung\n");
        printf("5. Muon sach\n6. Tra sach\n7. Tim sach theo ten\n8. Tim sach theo tac gia\n");
        printf("9. Hien thi danh sach sach\n10. Hien thi danh sach nguoi dung\n0. Thoat\nChon: ");
        scanf("%d", &c);

        switch(c){
            case 1: addBook(); break;
            case 2: editBook(); break;
            case 3: deleteBook(); break;
            case 4: addUser(); break;
            case 5: borrowBook(); break;
            case 6: returnBook(); break;
            case 7: searchByTitle(); break;
            case 8: searchByAuthor(); break;
            case 9: listBooks(); break;
            case 10: listUsers(); break;
            case 0: return 0;
            default: printf("Lua chon khong hop le!\n");
        }
    }
}
