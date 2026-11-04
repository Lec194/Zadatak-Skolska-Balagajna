#include <iostream>
#include <iomanip>

using namespace std;

const double CIJENA_ULAZNICE = 5.0;
const int PRAG_POPUSTA = 5;
const double STOPA_POPUSTA = 0.10;

int ukupnoUlaznica = 0;
double ukupniPrihod = 0.0;

bool ispravanUnos(int kolicina);
double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();

int main() {

    cout<<fixed<<setprecision(2);

    for(int i = 1; i <= 3; i++) {
        int kolicina = 0;

            cout << "Kupnja " << i << " - unesi broj ulaznica(1-30): ";
            cin >> kolicina;


    }


    return 0;
}
