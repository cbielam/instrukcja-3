#include <iostream> // Dołączamy bibliotekę do wprowadzania i wypisywania danych
using namespace std;
int main() {
    int n; // Zmienna 'n', w której zapiszemy, ile liczb parzystych chce zobaczyć użytkownik

    // --- PĘTLA DO-WHILE (sprawdzanie poprawności bez 'if') ---
    // Chcemy wypisać co najmniej jedną liczbę, więc wymuszamy na użytkowniku
    // podanie liczby większej od 0. Pętla "kręci się" tak długo, aż użytkownik poda poprawną wartość.
    do {
        std::cout << "Podaj, ile kolejnych liczb parzystych chcesz wyswietlic (wiecej niz 0): ";
        std::cin >> n; // Pobieramy wartość od użytkownika z klawiatury
    } while (n <= 0); // WARUNEK: Powtarzaj DOPÓKI podane 'n' jest mniejsze lub równe 0

    std::cout << "Oto Twoje " << n << " kolejnych liczb parzystych:\n";

    // --- GŁÓWNA PĘTLA FOR (generowanie bez 'if') ---
    // Pętla wykona się dokładnie 'n' razy (od i = 1 aż do i = n).
    // Zamiast instrukcji 'if', używamy prostej matematyki:
    // 1 * 2 = 2
    // 2 * 2 = 4
    // 3 * 2 = 6 ... i tak dalej!
    for (int i = 1; i <= n; i++) {
        // Wypisujemy wynik mnożenia (naszą liczbę parzystą) oraz spację, żeby się nie zlały
        std::cout << (i * 2) << " ";
    }

    std::cout << "\n"; // Dodajemy na sam koniec znak nowej linii dla estetyki
    return 0; // Informujemy komputer, że program zakończył się sukcesem
}
