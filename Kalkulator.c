// Program KALKULATOR

#include <stdio.h>
#include <math.h>

// Jason Kanggara / 16520214

// ASUMSI
// Masukkan input dari user sesuai dengan kaidah program

// Fungsi
int penjumlahan(int a, int b) {
    int result;
    result = a+b;
    return result;
}
int pengurangan(int a, int b) {
    int result;
    result = a-b;
    return result;
}
int perkalian(int a, int b) {
    int result;
    result = a*b;
    return result;
}
float pembagian(int a, int b) {
    float result;
    result = a/b;
    return result;
}
int pangkat(int a, int b) {
    // Asumsi (a sebagai basis dan b sebagai pangkat)
    // dan pangkat selalu > 1
    int result;
    if (b==1) {
        result = a;
    }
    else {
        result = a*(pangkat(a,b-1));
    }
    return result;
}

int integral(int a, int b, int n){
    // Fungsi(berupa test case) = 2x + 4
    int delta, fungsi;
    int result = 0;
    float hasilIntegral;
    delta = (b-a)/n;
    for (a; a<=b; a++){
        fungsi = 2*a + 4;
        result = result + fungsi;
    }

    hasilIntegral = delta*result;
    return hasilIntegral;
}

//Algoritma
int main() {
    float a, b;
    int n;
    char operator;
    float hasil;

    printf("masukkan angka a: ");
    scanf(" %f", &a);
    printf("masukkan angka b: ");
    scanf(" %f", &b);
    printf("Masukkan operator: ");
    scanf(" %c", &operator);

    if (operator == '+'){
        hasil = penjumlahan(a,b);
        printf("%.1f", hasil);
    }
    else if (operator == '-'){
        hasil = pengurangan(a,b);
        printf("%.1f", hasil);
    }
    else if (operator == '*'){
        hasil = perkalian(a,b);
        printf("%.1f", hasil);
    }
    else if (operator == '/'){
        hasil = pembagian(a,b);
        printf("%.1f", hasil);
    }
    else if (operator == '^'){
        hasil = pangkat(a,b);
        printf("%.1f", hasil);
    }
    else if (operator == 'I' || operator == 'i'){
        printf("Jumlah Partisi: ");
        scanf("%d", &n);
        hasil = integral(a,b,n);
        printf("%.1f", hasil);
    }
    else {
        printf("Error");
    }

    

    return 0;
}