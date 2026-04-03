#include <reg51.h>
char password[] = "hello";
char x[] = "ENTER PASSWORD: ";
char y[] = "TRY AGAIN!";
char z[] = "CORRECT PASSWORD";
void send_string(char *str) {
    while (*str) {
        SBUF = *str++;
        while (TI == 0);
        TI = 0;
    }
}
void main() {
    char input[10];
    int i;
    SCON = 0x50;
    TMOD = 0x20;
    TH1 = 0xFD;
    TR1 = 1;
    while (1) {
        send_string(x);
        for (i = 0; i < 5; i++) {
            while (RI == 0);
            input[i] = SBUF;
            RI = 0;

            // Echo back (optional)
            SBUF = input[i];
            while (TI == 0);
            TI = 0;
        }
        input[5] = '\0';

        // Compare password
        if (strcmp(input, password) == 0) {
            send_string(z);   // Correct password
        } else {
            send_string(y);   // Try again
        }
    }
}