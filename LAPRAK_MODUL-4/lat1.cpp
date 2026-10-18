#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

typedef string infotype;
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

void dealokasi(address P) {
    delete P;
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

void deleteFirst(list &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else {
        P = L.first;
        L.first = P->next;
        P->next = Nil;
    }
}

void printInfo(list L) {
    cout << "Antrean: ";
    if (isEmpty(L)) {
        cout << "kosong";
    } else {
        address P = L.first;
        while (P != Nil) {
            cout << P->info;
            if (P->next != Nil) {
                cout << " -> ";
            }
            P = P->next;
        }
    }
    cout << endl;
}

int main() {
    list L;
    address P;
    int pilihan;
    string nama;

    createList(L);

    while (cin >> pilihan && pilihan != 3) {
        if (pilihan == 1) {
            cin >> ws;
            getline(cin, nama);
            insertLast(L, alokasi(nama));
            printInfo(L);
        } else if (pilihan == 2) {
            deleteFirst(L, P);
            if (P == Nil) {
                cout << "Antrean kosong, tidak ada nasabah yang dilayani" << endl;
            } else {
                cout << "Melayani: " << P->info << endl;
                dealokasi(P);
                printInfo(L);
            }
        }
    }
    return 0;
}
