#include <stdio.h>

int main() {
    int a = 0xE000;
    int b = 0x0017;

    int mask_h = 0xE000; // mascara para los 3 bits más altos
    int mask_l = 0x0007; // mascara para los 3 bits más bajos

    // tambien podría haber hecho un shift derecha en sizeof(int)*4 -3 sin la mascara, solo
    // si cambio el tipo de a y b a unsigned int para evitar el shift aritmetico.

    printf("a&mask: %x \n", (a & mask_h));
    printf("a&mask con shift: %x \n", (a & mask_h) >> sizeof(int)*4-3);
    printf("b&mask : %x \n", b & mask_l);

    int res = (a & mask_h) >> sizeof(int)*4-3 == (b & mask_l);
    printf("%d", res);
}