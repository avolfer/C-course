#include <iostream>
using namespace std;

int main()
{
    int rokUrodzenia, rokAktualny, wiek;

    // Wprowadź dane
    cout << "Podaj rok swojego urodzenia: ";
    cin >> rokUrodzenia;

    cout << "Podaj aktualny rok: ";
    cin >> rokAktualny;

    // Oblicz wiek
    wiek = rokAktualny - rokUrodzenia;

    // Wyświetl wynik
    cout << "Masz " << wiek << " lat." << endl;

    return 0;
}
