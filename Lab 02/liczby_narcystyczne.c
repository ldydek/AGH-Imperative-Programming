#include <stdio.h>
#include <math.h>


int main() {
    int m, b;
    int found=0, suma1=0, suma2=0;
    scanf("%d", &m);
    scanf("%d", &b);
    int tab[8];

    for (int a7=0; a7<b; a7++) {
        tab[7] = a7;
        for (int a6=0; a6<b; a6++) {
            tab[6] = a6;
            for (int a5=0; a5<b; a5++) {
                tab[5] = a5;
                for (int a4=0; a4<b; a4++) {
                    tab[4] = a4;
                    for (int a3=0; a3<b; a3++) {
                        tab[3] = a3;
                        for (int a2=0; a2<b; a2++) {
                            tab[2] = a2;
                            for (int a1=0; a1<b; a1++) {
                                tab[1] = a1;
                                for (int a0=0; a0<b; a0++) {
                                    tab[0] = a0;

                                    if ((m != 8) && (tab[m] == 1))
                                        goto koniec;
                                    if (tab[m-1] == 0)
                                        continue;
                                    for (int i=0; i<m; i++) {
                                        suma2 += pow(tab[i], m);
                                        suma1 += tab[i] * pow(b, i);
                                    }

                                    if (suma2 == suma1) {
                                        found = 1;
                                        for (int i=m-1; i>=0; i--) {
                                            switch (tab[i]) {
                                                case 10:
                                                    printf("A");
                                                    break;
                                                case 11:
                                                    printf("B");
                                                    break;
                                                case 12:
                                                    printf("C");
                                                    break;
                                                case 13:
                                                    printf("D");
                                                    break;
                                                case 14:
                                                    printf("E");
                                                    break;
                                                case 15:
                                                    printf("F");
                                                    break;
                                                default:
                                                    printf("%d", tab[i]);
                                                    break;
                                            }
                                        }
                                        printf(" ");
                                    }
                                    suma2 = 0;
                                    suma1 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    koniec:
    if (found == 0) printf("NO");
}
