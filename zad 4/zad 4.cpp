#include <iostream> // Biblioteka do obsługi wprowadzania i wypisywania danych

int main() {
    int n; // Zmienna na liczbę podaną przez użytkownika
    long long wynik = 1; // Zmienna na wynik. Ustawiamy na 1, bo w mnożeniu 1 to wartość neutralna (jak 0 w dodawaniu). Co ważne: 0! również wynosi 1.

    // --- PĘTLA DO-WHILE (zastępuje 'if' do sprawdzania błędu) ---
    // Silnia jest zdefiniowana tylko dla liczb całkowitych nieujemnych (0, 1, 2...).
    // Ta pętla będzie męczyć użytkownika, dopóki nie poda prawidłowej liczby.
    do {
        std::cout << "Podaj liczbe naturalna (0 lub wieksza), aby obliczyc silnie: ";
        std::cin >> n;
    } while (n < 0); // Powtarzaj DOPÓKI podana liczba 'n' jest mniejsza od 0

    // --- GŁÓWNA PĘTLA FOR (obliczanie silni) ---
    // Jak to działa bez if-a? 
    // Jeśli użytkownik wpisze n = 0, warunek "i <= n" (czyli "1 <= 0") będzie od razu fałszywy!
    // Pętla po po prostu nie wykona się ani razu, a nasz "wynik" pozostanie równy 1. 
    // Magia pętli for sprawia, że nie potrzebujemy if-a do obsługi wyjątku dla 0!
    for (int i = 1; i <= n; i++) {
        wynik = wynik * i; // Mnożymy dotychczasowy wynik przez kolejną liczbę (1, potem 2, potem 3...)
    }

    // Wypisujemy gotowy wynik na ekran
    std::cout << "Wartosc " << n << "! wynosi: " << wynik << "\n";

    return 0; // Zakończenie programu
}