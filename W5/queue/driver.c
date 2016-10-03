/* File : stack.h */
/* Definisi stack yang diimplementasi dengan tabel kontigu dan alokasi dinamik */

#include<stdio.h>
#include "queue.h"

int main() {
    Queue Q;
    infotype X;
    
    CreateEmpty(&Q, 4);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("Max %d\n", MaxEl(Q));
    printf("Empty %d\n", IsEmpty(Q));

    Add(&Q, 1);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));

    Add(&Q, 2);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));
    
    Add(&Q, 3);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));

    Add(&Q, 4);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));

    printf("Full %d\n", IsFull(Q));

    Add(&Q, 4);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));

    Add(&Q, 4);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));

    Add(&Q, 4);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));
    
    Iterate(Q);

    Del(&Q, &X);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));
    printf("Val %d\n", X);

    Del(&Q, &X);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));
    printf("Val %d\n", X);

    Del(&Q, &X);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));
    printf("Val %d\n", X);
    
    Iterate(Q);

    Del(&Q, &X);
    printf("Head %d\n", Head(Q));
    printf("Tail %d\n", Tail(Q));
    printf("NbElmt %d\n", NbElmt(Q));
    printf("Val %d\n", X);
    printf("Empty %d\n", IsEmpty(Q));
    
    return 0;
}
