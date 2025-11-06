#ifndef USERS_H
#define USERS_H

struct User {
    int id;
    char name[50];
    int borrowedBooks[10];
    int borrowCount;
};

extern struct User users[100];
extern int userCount;

void addUser();
void listUsers();
int findUserIndex(int id);

#endif
