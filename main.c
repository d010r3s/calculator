#include "library.h"


float input(const char ch[]) {
    //double pie = 3.1415926;

    int i = 3, j = 0;
    char temp[10];
    while (ch[i] != '\0') {
        if (ch[i] == ' ') {
            i++;
            break;
        }
        i++;
    }
    while (ch[i] != '\0') {
        temp[j] = ch[i];
        j++;
        i++;
    }
    return dle(atoi(temp));
}

void super_loop(const char * ch) {
        char ch[20];
        float res;
        int sucks = 0;
        while (1) {
            printf("\n>");
           // gets(ch);
            switch (ch[0]) {
                case 'e':
                    res = exp(input(ch));
                    break;
                case 'l':
                    switch (ch[1]) {
                        case 'n':
                            res = log(input(ch));
                            break;
                        case 'o':
                            res = log10(input(ch));
                            break;
                    }
                    break;
                case 's':
                    switch (ch[1]) {
                        case 'i':
                            res = sinf(input(ch));
                            break;
                        case 'q':
                            res = sqrt(input(ch));
                            break;
                    }
                    break;
                case 'c':
                    res = cosf(input(ch));
                    break;
                case 't':
                    res = tanf(input(ch));
                    break;
                case 'a':
                    switch (ch[1]) {
                        case 'b':
                            res = abs(input(ch));
                            break;
                        case 's':
                            res = asinf(input(ch));
                            break;
                        case 'c':
                            res = acosf(input(ch));
                            break;
                        case 't':
                            res = atanf(input(ch));
                            break;
                    }
                    break;
                case 'q':
                    return;
                default:
                    sucks = 1;
                    printf("Invalid Input! Retry\n");
            }
            if (!sucks) {
                printf("Output: %f\n", res);
            } else {
                sucks = 0;
            }
        }
}
