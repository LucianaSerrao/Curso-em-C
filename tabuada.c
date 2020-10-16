#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // NUMERO PRINCIPAL X NUMERO SECUNDARIO = RESULTADO

    int num_princ, num_sec, result;

    for(num_princ = 1; num_princ <= 5; num_princ++){
        printf("----- TABUADA DO %d -----\n", num_princ);
        for(num_sec = 1; num_sec <= 10; num_sec++){
            result = (num_princ*num_sec);            
            printf("%d X %d = %d\n", num_princ, num_sec, result);
        }
    }

    return 0;
}