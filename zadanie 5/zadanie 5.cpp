#include <iostream> // Biblioteka pozwalająca na wypisywanie tekstu na ekranie
using namespace std;
int main() {
    // Tworzymy zmienne na dwa początkowe wyrazy ciągu (F_0 i F_1)
    // Używamy 'long long', aby mieć pewność, że w razie większych liczb nie zabraknie miejsca
    long long a = 0; // Nasze aktualne 'F_0' z Twojej tabeli
    long long b = 1; // Nasze 'F_1' z tabeli
    long long nastepny; // Puste pudełko, w którym będziemy na chwilę trzymać wynik dodawania

    std::cout << "Pierwsze 20 wyrazow ciagu Fibonacciego (F0 - F19):\n";

    // --- GŁÓWNA PĘTLA FOR (obliczanie i wypisywanie) ---
    // Pętla wykona się dokładnie 20 razy (dla 'i' od 0 do 19).
    // Brak 'if' - od razu wypisujemy i liczymy dalej!
    for (int i = 0; i < 20; i++) {

        // 1. Najpierw wypisujemy aktualną wartość 'a'. 
        // W pierwszym przejściu pętli będzie to po prostu 0 (czyli F_0).
        std::cout << "F_" << i << " = " << a << "\n";

        // 2. Obliczamy kolejny wyraz ciągu jako sumę dwóch poprzednich
        nastepny = a + b;

        // 3. Przesuwamy nasze "okienko" o jeden krok do przodu:
        a = b;        // Stara wartość 'b' staje się teraz naszym nowym 'a'
        b = nastepny; // Nowo obliczona suma staje się naszym nowym 'b'
    }

    return 0; // Koniec programu
}
