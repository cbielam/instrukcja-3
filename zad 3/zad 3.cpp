#include <iostream> // Dołączamy bibliotekę, która pozwala na wpisywanie i wypisywanie tekstu na ekranie
using namespace std;
int main() { // Główna funkcja programu - od tego miejsca program zaczyna działać

    int n; // Tworzymy zmienną (pudełko) o nazwie 'n', która będzie przechowywać liczby całkowite

    // --- INSTRUKCJA ITERACYJNA I WARUNKOWA W JEDNYM (zamiast 'if') ---
    // Używamy pętli 'do-while', aby upewnić się, że użytkownik poda liczbę dodatnią.
    // Pętla będzie prosić o liczbę tak długo, aż użytkownik wpisze coś większego od zera.
    do {
        std::cout << "Podaj dodatnia liczbe calkowita (wieksza od 0): "; // Wyświetlamy prośbę na ekranie
        std::cin >> n; // Pobieramy to, co wpisał użytkownik i zapisujemy w zmiennej 'n'
    } while (n <= 0); // WARUNEK: Powtarzaj powyższe kroki, DOPÓKI 'n' jest mniejsze lub równe 0

    std::cout << "Poczatkowe liczby naturalne to: \n"; // Wypisujemy komunikat ('\n' to przejście do nowej linii)

    // --- GŁÓWNA INSTRUKCJA ITERACYJNA ---
    // Pętla 'for' służy do odliczania i powtarzania kodu określoną liczbę razy.
    // Składa się z 3 części: 
    // 1. int i = 1; -> Zaczynamy liczenie od 1 (bo 1 to pierwsza liczba naturalna dodatnia)
    // 2. i <= n;    -> WARUNEK: Powtarzaj pętlę, dopóki 'i' jest mniejsze lub równe naszej liczbie 'n'
    // 3. i++        -> Po każdym przejściu pętli, zwiększ 'i' o 1 (to skrót od i = i + 1)
    for (int i = 1; i <= n; i++) {
        std::cout << i << " "; // Wypisujemy aktualną wartość 'i' oraz spację, żeby liczby się nie zlały
    }

    return 0; // Informujemy komputer, że program zakończył się sukcesem
}
