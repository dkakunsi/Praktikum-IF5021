/* File : stack.h */
/* Definisi stack yang diimplementasi dengan tabel kontigu dan alokasi dinamik */

#ifndef _stack_H
#define _stack_H

#include "boolean.h"

#define Nil -99
/* Nil adalah konstanta indeks tak terdefinisi */

typedef long infotype;
typedef int address;   /* indeks tabel */

/* Contoh deklarasi variabel bertype stack dengan ciri TOP : */
/* Versi I : dengan menyimpan tabel dan alamat top secara eksplisit*/
typedef struct { 
	infotype * T; 	/* tabel penyimpan elemen */
	address TOP;  	/* alamat TOP: elemen puncak */
	int MaxEl;    	/* ukuran tabel penyimpan elemen */  
} Stack;
/* Definisi stack S kosong : S.TOP = Nil */
/* Elemen yang dipakai menyimpan nilai Stack T[0]..T[MaxEl-1] */
/* Jika S adalah Stack maka akses elemen : */
   /* S.T[(S.TOP)] untuk mengakses elemen TOP */
   /* S.TOP adalah alamat elemen TOP */

/* Definisi akses dengan Selektor : Set dan Get */
#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define MaxEl(S) (S).MaxEl

/* ************ Prototype ************ */

/* *** Konstruktor/Kreator *** */
void CreateEmpty (Stack *S, int size);
/* I.S. S sembarang, size terdefinisi */
/* F.S. Membuat sebuah stack S yang kosong berkapasitas  size atau MaxEl = size. 
        Tabel container stack dari indeks 0..MaxEl-1. */
/* Ciri stack kosong : TOP bernilai Nil */
/* *** Destruktor *** */
void DeAlokasi (Stack *S);
/* Proses: Mengembalikan memori S */
/* I.S. S pernah dialokasi */
/* F.S. S menjadi tidak terdefinisi lagi, MaxEl(S) diset 0 */


/* ************ Predikat Untuk test keadaan KOLEKSI ************ */
boolean IsEmpty (Stack S);
/* Mengirim true jika Stack kosong: lihat definisi di atas */
boolean IsFull (Stack S);
/* Mengirim true jika tabel penampung nilai elemen stack penuh */

/* ************ Menambahkan sebuah elemen ke Stack ************ */
void Push (Stack * S, infotype X);
/* Menambahkan X sebagai elemen Stack S. */
/* I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh */
/* F.S. X menjadi TOP yang baru,TOP bertambah 1 */

/* ************ Menghapus sebuah elemen Stack ************ */
void Pop (Stack * S, infotype* X);
/* Menghapus X dari Stack S. */
/* I.S. S  tidak mungkin kosong */
/* F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */

/* *** Operasi Tambahan *** */
infotype Peek (Stack S, address i); 
/* Prekondisi: S tidak kosong */
/* Menghasilkan nilai S pada indeks ke-i tanpa mengubah state dari Stack */
void Iterate (Stack S);
/* Menuliskan isi S dari Top ke 0 dengan menggunakan Peek */
/* Tidak menuliskan apa pun jika S kosong */
/* I.S.: S terdefinisi */
/* F.S. Isi S tertulis ke layar dari Top ke 0. Setiap elemen dituliskan sebagai satu baris,
        diakhiri sebuah enter. */

#endif
