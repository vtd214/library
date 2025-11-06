#include <stdio.h>
#include <string.h>
#include "users.h"

struct User users[100];
int userCount = 0;

int findUserIndex(int id) {
    for(int i = 0; i < userCount; i++)
        if(users[i].id == id) return i;
    return -1;
}

void addUser() {
    struct User u;
    printf("Nhap ID nguoi dung: "); scanf("%d", &u.id);
    printf("Nhap ten nguoi dung: "); scanf("%s", u.name);

    u.borrowCount = 0;
    users[userCount++] = u;
    printf("✅ Them nguoi dung thanh cong!\n");
}

void listUsers() {
    printf("\n--- Danh sach nguoi dung ---\n");
    for(int i = 0; i < userCount; i++)
        printf("ID: %d | %s | Dang muon %d sach\n", users[i].id, users[i].name, users[i].borrowCount);
}
