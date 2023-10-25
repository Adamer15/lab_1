#include <iostream>
#include <cmath>
#define przerwa() printf("\n-------------------------------------------\n")
using namespace std;
void zadanie_2a()
{
    printf("Zadanie 2a\n");
    double r, wynik;
    printf("Podaj dlugosc promienia okregu: \n");
    scanf("%lf", &r);
    wynik =  M_PI * r * r;
    printf("Pole kola wynosi: %lf", wynik);
}
void zadanie_2b()
{
    printf("Zadanie 2b\n");
    double r, wynik;
    printf("Podaj dlugosc promienia kuli: \n");
    scanf("%lf", &r);
    wynik =  (4.0/3.0 * M_PI * pow(r, 3));
    printf("Objetosc kuli wynosi: %lf", wynik);
}
void zadanie_2c()
{
    printf("Zadanie 2c\n");
    double a, b, wynik;
    printf("Podaj wartosci parametrow a oraz b: \n");
    scanf("%lf %lf", &a, &b);
    wynik =  sqrt(pow(a,2) + pow(b, 2));
    printf("Modul liczby zespolonej wynosi: %lf", wynik);
}
void zadanie_2d()
{
    printf("Zadanie 2d\n");
    double a, b, y, wynik;
    printf("Podaj wartosci zmiennych a i b oraz wartosc kata y: \n");
    scanf("%lf %lf %lf", &a, &b, &y);
    wynik = sqrt(pow(a,2) + pow(b, 2) - 2*a*b* cos(y));
    printf("Dlugosc trzeciego boku wynosi: %lf", wynik);
}
void zadanie_2e()
{
    printf("Zadanie 2e\n");
    double a, p, n, wynik;
    printf("Podaj kapital poczatkowy, oprocentowanie wyrazone liczba oraz liczbe kapitalizacji: \n");
    scanf("%lf %lf %lf", &a, &p, &n);
    wynik = a*pow((1.0 + (p/100.0)), n);
    printf("Kapital koncowy to: %.3lf zl", wynik);
}
void zadanie_2f()
{
    printf("Zadanie 2f\n");
    double a, b, c, wynik;
    printf("Podaj liczby a, b oraz c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    wynik = (((a * b)+(a *  c))/(b + c));
    printf("Wynik dzialania to: %lf", wynik);
}
int main() {
        zadanie_2a();
        przerwa();
        zadanie_2b();
        przerwa();
        zadanie_2c();
        przerwa();
        zadanie_2d();
        przerwa();
        zadanie_2e();
        przerwa();
        zadanie_2f();

    return 0;
}
