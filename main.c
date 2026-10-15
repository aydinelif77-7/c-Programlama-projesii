#include <stdio.h>
#include <math.h>

int main() {
    float urunTutari, odenenPara;
    int paraUstu, kalan;
    int yuzTL, elliTL, yirmiTL, onTL, besTL, birTL;
    int elliKr, yirmiBesKr, onKr, besKr, birKr;
    int toplam;

    printf("Urun tutarini giriniz: ");
    scanf("%f", &urunTutari);

    printf("Odenen parayi giriniz: ");
    scanf("%f", &odenenPara);

    paraUstu = (int)roundf((odenenPara - urunTutari) * 100.0f);

    kalan = paraUstu;

    yuzTL = kalan / 10000;
    kalan = kalan % 10000;

    elliTL = kalan / 5000;
    kalan = kalan % 5000;

    yirmiTL = kalan / 2000;
    kalan = kalan % 2000;

    onTL = kalan / 1000;
    kalan = kalan % 1000;

    besTL = kalan / 500;
    kalan = kalan % 500;

    birTL = kalan / 100;
    kalan = kalan % 100;

    elliKr = kalan / 50;
    kalan = kalan % 50;

    yirmiBesKr = kalan / 25;
    kalan = kalan % 25;

    onKr = kalan / 10;
    kalan = kalan % 10;

    besKr = kalan / 5;
    kalan = kalan % 5;

    birKr = kalan;

    toplam = yuzTL + elliTL + yirmiTL + onTL + besTL
           + birTL + elliKr + yirmiBesKr + onKr
           + besKr + birKr;

    printf("\nPara ustu: %d kurus\n", paraUstu);

    printf("100 TL: %d adet\n", yuzTL);
    printf("50 TL: %d adet\n", elliTL);
    printf("20 TL: %d adet\n", yirmiTL);
    printf("10 TL: %d adet\n", onTL);
    printf("5 TL: %d adet\n", besTL);
    printf("1 TL: %d adet\n", birTL);
    printf("50 kurus: %d adet\n", elliKr);
    printf("25 kurus: %d adet\n", yirmiBesKr);
    printf("10 kurus: %d adet\n", onKr);
    printf("5 kurus: %d adet\n", besKr);
    printf("1 kurus: %d adet\n", birKr);

    printf("Toplam kupur sayisi: %d\n", toplam);

    return 0;
}
