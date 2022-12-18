#include <iostream>
#include "stdio.h"
#include "stdlib.h"

void FindWords();
void FindWords2();

int findword1=0;
int findword2=0;

int main() {

    FindWords();
    if( findword1 != 0){
        printf("We Found winhtut : %d times\n",findword1);
    } else{
        printf("Ohh NO! : winhtut is not found");
    };

    FindWords2();
    if( findword2 != 0){
        printf("We Found NationalCyberCity : %d times\n",findword2);
    } else{
        printf("Ohh NO! : NationalCyberCity is not found");
    };

    return 0;
}

void FindWords() {

    FILE *ftpr;
    ftpr = fopen("Words.txt", "r");
    char c = fgetc(ftpr);

    while (!feof(ftpr)) {
        if (c == 119) {
            while (!feof(ftpr)) {
                c = fgetc(ftpr);
                if (c == 105) {
                    while (!feof(ftpr)) {
                        c = fgetc(ftpr);
                        if (c == 110) {
                            while (!feof(ftpr)) {
                                c = fgetc(ftpr);
                                if (c == 104) {
                                    while (!feof(ftpr)) {
                                        c = fgetc(ftpr);
                                        if (c == 116) {
                                            while (!feof(ftpr)) {
                                                c = fgetc(ftpr);
                                                if (c == 117) {
                                                    while (!feof(ftpr)) {
                                                        c = fgetc(ftpr);
                                                        if (c == 116) {
                                                            findword1++;
//                                                            printf("We Found winhtut : %d times\n", findword1);
                                                        }
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        c = fgetc(ftpr);

    }

    fclose(ftpr);
}

void FindWords2() {

    FILE *ftpr;
    ftpr = fopen("Words.txt", "r");
    char c = fgetc(ftpr);

    while (!feof(ftpr)) {
        if (c == 78) {
            while (!feof(ftpr)) {
                c = fgetc(ftpr);
                if (c == 97) {
                    while (!feof(ftpr)) {
                        c = fgetc(ftpr);
                        if (c == 116) {
                            while (!feof(ftpr)) {
                                c = fgetc(ftpr);
                                if (c == 105) {
                                    while (!feof(ftpr)) {
                                        c = fgetc(ftpr);
                                        if (c == 111) {
                                            while (!feof(ftpr)) {
                                                c = fgetc(ftpr);
                                                if (c == 110) {
                                                    while (!feof(ftpr)) {
                                                        c = fgetc(ftpr);
                                                        if (c == 97) {
                                                            while (!feof(ftpr)) {
                                                                c = fgetc(ftpr);
                                                                if (c == 108) {
                                                                    while (!feof(ftpr)) {
                                                                        c = fgetc(ftpr);
                                                                        if (c == 67) {
                                                                            while (!feof(ftpr)) {
                                                                                c = fgetc(ftpr);
                                                                                if (c == 121) {
                                                                                    while (!feof(ftpr)) {
                                                                                        c = fgetc(ftpr);
                                                                                        if (c == 98) {
                                                                                            while (!feof(ftpr)) {
                                                                                                c = fgetc(ftpr);
                                                                                                if (c == 101) {
                                                                                                    while (!feof(ftpr)) {
                                                                                                        c = fgetc(ftpr);
                                                                                                        if (c == 114) {
                                                                                                            while (!feof(ftpr)) {
                                                                                                                c = fgetc(ftpr);
                                                                                                                if (c == 67) {
                                                                                                                    while (!feof(ftpr)) {
                                                                                                                        c = fgetc(ftpr);
                                                                                                                        if (c == 105) {
                                                                                                                            while (!feof(ftpr)) {
                                                                                                                                c = fgetc(ftpr);
                                                                                                                                if (c == 116) {
                                                                                                                                    while (!feof(ftpr)) {
                                                                                                                                        c = fgetc(ftpr);
                                                                                                                                        if (c ==121) {
                                                                                                                                            findword2++;
//                                                                                                                                            printf("We Found NationalCyberCity : %d times\n", findword2);
                                                                                                                                        }
                                                                                                                                        break;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                break;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        break;
                                                                                                                    }
                                                                                                                }
                                                                                                                break;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                        }
                                                                        break;
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        c = fgetc(ftpr);

    }

    fclose(ftpr);
}

