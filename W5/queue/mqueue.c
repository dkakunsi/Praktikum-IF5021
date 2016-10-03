/* File : stack.h */
/* Definisi stack yang diimplementasi dengan tabel kontigu dan alokasi dinamik */

#include<stdio.h>
#include "queue.h"

int main() {
    Queue Q;
    int size, i;
    int n, m, N;
    infotype val;
    
    //baca size
    scanf("%d", &size);
    i = 0;
    CreateEmpty(&Q, size);
    while(i < N) {

        //baca n
        scanf("%d %d", &n, &m);
        if (n > 0) {
            while(n >= 0) {
                Add(&Q, m);
                if (IsFull(Q)) {
                    printf("PENUH\n");
                    break;
                }
                
                n--;
            }
        } else if(n < 0) {
            while(n < 0) {
                Del(&Q, &val);
                if (IsEmpty(Q)) {
                    printf("KOSONG\n");
                    break;
                }
            }
        } else {
            Iterate(Q);
        }
    }
    
    printf("\n");
    return 0;
}
