/* File : queue.h */
/* Definisi queue yang diimplementasi dengan tabel kontigu dan alokasi dinamik */
/* Implementasi queue dengan circular buffer */

#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

void CreateEmpty (Queue * Q, int Max) {
    if ((Q->T = (infotype*) malloc(sizeof(infotype) * Max))) {
        MaxEl(*Q) = Max;
        Head(*Q) = Nil;
        Tail(*Q) = Nil;
    } else {
        MaxEl(*Q) = 0;
    }
}

void DeAlokasi (Queue * Q) {
	free(Q->T);
    MaxEl(*Q) = 0;
}

boolean IsEmpty (Queue Q) {
    return (Head(Q) == Nil) && (Tail(Q) == Nil);
}

boolean IsFull (Queue Q) {
    return NbElmt(Q) == MaxEl(Q);
}

int NbElmt (Queue Q) {
    if (IsEmpty(Q))
        return 0;
    
    if (Head(Q) > Tail(Q))
        return Tail(Q) - Head(Q) + MaxEl(Q) + 1;
    return Tail(Q) - Head(Q) + 1;
	
	/* ditambahkan 1 dibelakang karena index mulai dari 0 */
}

void Add (Queue * Q, infotype X) {
    if (!IsFull(*Q)) {
        if (IsEmpty(*Q)) {
            Head(*Q) = 0;
            Tail(*Q) = 0;
        } else {
            Tail(*Q)++;
        }
        
        if (Tail(*Q) >= MaxEl(*Q))
            Tail(*Q) = 0;
        
        InfoTail(*Q) = X;
    }
}

void Del (Queue * Q, infotype * X) {
    if (!IsEmpty(*Q)) {
        *X = InfoHead(*Q);
        
        Head(*Q)++;
		/* Jika setelah Del, NbElmt menghasilkan nilai maksimal,
		 * maka disimpulkan bahwa Queue kosong (lihat definisi NbElmt) */
        if (NbElmt(*Q) == MaxEl(*Q)) {
            Head(*Q) = Nil;
            Tail(*Q) = Nil;
        } else if (Head(*Q) >= MaxEl(*Q)) {
            Head(*Q) = 0;
        }
    }
}

infotype Peek (Queue Q, address i) {
    address tmp, idx;
    infotype result;
    
    if (!IsEmpty(Q)) {
		/* simpan state Head saat ini */
        tmp = Head(Q);

		Head(Q) += (i - 1);
		if (Head(Q) >= MaxEl(Q))
			Head(Q) = (Head(Q) % MaxEl(Q));
        result = InfoHead(Q);

		/* restore state Head ke keadaan semula */
        Head(Q) = tmp;
        
        return result;
    }
    
    return Nil;
}

void Iterate (Queue Q) {
    int idx;
    for (idx = 1; idx <= NbElmt(Q); idx++)
        printf("%ld ", Peek(Q, idx));
}
