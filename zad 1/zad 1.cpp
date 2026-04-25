#include <iostream>
#include <cmath> // Dołączamy bibliotekę matematyczną, żeby móc obliczyć pierwiastek (sqrt)
using namespace std;
int main() {
    // Tworzymy zmienne na liczby ułamkowe (double), bo w dzieleniu mogą wyjść ułamki
    double a, b, c, d, x1, x2;

    // --- KROK 1: Pętla DO-WHILE dla zmiennej 'a' ---
    // Odwzorowuje pierwszy romb "a=0" ze strzałką "TAK" wracającą do góry.
    // Pętla zmusza użytkownika do podania 'a' różnego od zera.
    do {
        std::cout << "Podaj zmienna a (rozna od 0): ";
        std::cin >> a;
    } while (a == 0); // Powtarzaj DOPÓKI a jest równe 0

    // --- KROK 2: Pobranie b i c oraz obliczenie delty (d) ---
    std::cout << "Podaj zmienna b i c: ";
    std::cin >> b >> c;

    // Odwzorowanie prostokąta z napisem: d = b^2 - 4ac
    d = (b * b) - (4 * a * c);


    // --- KROK 3: "Sztuczne" IF-y za pomocą pętli FOR ---
    // Ponieważ nie możemy użyć 'if', używamy pętli FOR.
    // Konstrukcja "int i = 0; i < 1 && d == 0; i++" oznacza:
    // Zrób to tylko, jeśli d == 0. Jeśli d nie jest 0, pętla nie wykona się wcale!
    // Pętla wykona się też maksymalnie 1 raz (bo i urośnie i warunek i < 1 przerwie pętlę).

    // Odwzorowanie rombu: d=0 ? (TAK)
    for (int i = 0; i < 1 && d == 0; i++) {
        x1 = -b / (2 * a);
        std::cout << "Jeden pierwiastek: x1 = " << x1 << "\n";
    }

    // Odwzorowanie rombu: d<0 ? (TAK)
    for (int i = 0; i < 1 && d < 0; i++) {
        std::cout << "Brak pierwiastkow\n";
    }

    // Odwzorowanie rombu: d<0 ? (NIE), czyli d > 0
    // Ta pętla zadziała tylko, gdy d jest większe od zera
    for (int i = 0; i < 1 && d > 0; i++) {
        x1 = (-b - sqrt(d)) / (2 * a); // sqrt() to funkcja obliczająca pierwiastek kwadratowy
        x2 = (-b + sqrt(d)) / (2 * a);
        std::cout << "Dwa pierwiastki: x1 = " << x1 << "\nx2 = " << x2 << "\n";
    }

    // Program dochodzi do "STOP"
    return 0;
}
