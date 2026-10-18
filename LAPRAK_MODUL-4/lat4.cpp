#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

struct buku {
    string judul;
    int tahun;
};

typedef buku infotype;
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

void deleteLast(list &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else if (L.first->next == Nil) {
        P = L.first;
        L.first = Nil;
    } else {
        address Q = L.first;
        while (Q->next->next != Nil) {
            Q = Q->next;
        }
        P = Q->next;
        Q->next = Nil;
    }
}

void printInfo(list L) {
    cout << "Daftar Buku:" << endl;
    address P = L.first;
    while (P != Nil) {
        cout << P->info.judul << " (" << P->info.tahun << ")" << endl;
        P = P->next;
    }
}

int main() {
    list L;
    address P;
    string baris;
    buku b;

    createList(L);

    while (getline(cin, baris) && !baris.empty()) {
        size_t pos = baris.rfind(' ');
        if (pos == string::npos) {
            continue;
        }
        b.judul = baris.substr(0, pos);
        b.tahun = stoi(baris.substr(pos + 1));
        insertLast(L, alokasi(b));
    }

    deleteLast(L, P);
    if (P != Nil) {
        dealokasi(P);
    }

    printInfo(L);
    return 0;
}
