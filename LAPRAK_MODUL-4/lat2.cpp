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

address findElm(list L, infotype x) {
    address P = L.first;
    while (P != Nil && P->info != x) {
        P = P->next;
    }
    return P;
}

void insertAfter(list &L, address P, address Prec) {
    P->next = Prec->next;
    Prec->next = P;
}

void printInfo(list L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info;
        if (P->next != Nil) {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}

int main() {
    list L;
    address Prec;
    int n, x, cari, baru;

    createList(L);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertLast(L, alokasi(x));
    }
    cin >> cari >> baru;

    Prec = findElm(L, cari);
    if (Prec != Nil) {
        insertAfter(L, alokasi(baru), Prec);
    } else {
        cout << "Data " << cari << " tidak ditemukan" << endl;
    }

    printInfo(L);
    return 0;
}
