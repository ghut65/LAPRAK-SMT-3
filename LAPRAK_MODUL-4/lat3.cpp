#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &L) {
    L.first = Nil;
}

bool isEmpty(list L) {
    return L.first == Nil;
}

address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = Nil;
    return P;
}

void insertLast(list &L, address P) {
    if (isEmpty(L)) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void hitungSum(list L, int &total) {
    total = 0;
    address P = L.first;
    while (P != Nil) {
        total = total + P->info;
        P = P->next;
    }
}

int main() {
    list L;
    int n, x, total;

    createList(L);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    hitungSum(L, total);
    cout << total << endl;
    return 0;
}
