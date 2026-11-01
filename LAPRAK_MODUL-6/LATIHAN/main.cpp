#include "Doublylist.h"

int main() {
    List L;
    CreateList(L);

    cout << "=== INPUT DATA KENDARAAN (ketik 'stop' pada no polisi untuk selesai) ===" << endl;
    while (true) {
        infotype x;
        cout << "\nmasukkan nomor polisi    : ";
        cin >> x.nopol;
        if (x.nopol == "stop") {
            break;
        }
        cout << "masukkan warna kendaraan : ";
        cin >> x.warna;
        cout << "masukkan tahun kendaraan : ";
        cin >> x.thnBuat;

        if (findElm(L, x) != Nil) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            insertLast(L, alokasi(x));
        }
    }
    printInfo(L);

    infotype cari;
    cout << "\nMasukkan Nomor Polisi yang dicari : ";
    cin >> cari.nopol;
    address Q = findElm(L, cari);
    if (Q != Nil) {
        cout << "\nNomor Polisi : " << Q->info.nopol << endl;
        cout << "Warna        : " << Q->info.warna << endl;
        cout << "Tahun        : " << Q->info.thnBuat << endl;
    } else {
        cout << "Data dengan nomor polisi " << cari.nopol << " tidak ditemukan" << endl;
    }

    infotype hapus;
    cout << "\nMasukkan Nomor Polisi yang akan dihapus : ";
    cin >> hapus.nopol;
    address R = findElm(L, hapus);
    if (R == Nil) {
        cout << "Data dengan nomor polisi " << hapus.nopol << " tidak ditemukan" << endl;
    } else {
        address P;
        if (R == L.First) {
            deleteFirst(L, P);
        } else if (R == L.Last) {
            deleteLast(L, P);
        } else {
            deleteAfter(R->prev, P);   
        }
        cout << "Data dengan nomor polisi " << P->info.nopol << " berhasil dihapus" << endl;
        dealokasi(P);
    }
    printInfo(L);

    address S;
    while (L.First != Nil) {
        deleteFirst(L, S);
        dealokasi(S);
    }

    return 0;
}
