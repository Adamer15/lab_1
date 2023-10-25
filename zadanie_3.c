#include <stdio.h>
#include <math.h>
#define przerwa() printf("--------------------------------------------------")
void zadanie_3a()
{
    double a, b, s;
    printf("\nPodaj dwie liczby: ");
    scanf("%lf %lf", &a, &b);
    if (a > b)
        printf("Pierwsza liczba jest wieksza od drugiej");
    else if (a == b)
        printf("Podane liczby sa rowne");
    else
        printf("Druga liczba jest wieksza od pierwszej");
    s = a + b;
    printf("\nSuma wprowadzonych liczb wynosi: %.2lf\n", s);
}
void zadanie_3b()
{
    double n = 0, a, b, c, srednia, suma;
    printf("\nPodaj trzy liczby: ");
    scanf("%lf", &a);
    n++;
    scanf("%lf", &b);
    n++;
    scanf("%lf", &c);
    n++;
    suma = a + b + c;
    srednia = suma/n;
    if (srednia > 5)
        printf("Wysoka srenia\n");
    printf("Srednia wynosi: %.2lf \nSuma wynosi: %.2lf\n", srednia, suma);
}
void zadanie_3c()
{
    double a, b, c, delta = 0, p, q, x1, x2;
    printf("\nPodaj wspolczynniki trojmianu kwadratowego: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b*b - (4*a*c);
    p = (-b)/(2*a);
    q = (-delta)/(4*a);

        x1 = ((-b) + sqrt(delta)) / (2 * a);
        x2 = ((-b) - sqrt(delta)) / (2 * a);
    if (delta >= 0) {
        printf("Wierzcholek funkcji to: W(%.2lf, %.2lf). Miejsca zerowe: x1 = %.2lf, x2 = %.2lf\n", p, q, x1, x2);
    }
    else {
        if (delta < 0)
        printf("Wierzcholek funkcji to: W(%.2lf, %.2lf). BRAK ROZWIAZAN RZECZYWISTYCH\n", x1, x2);
    }
}
void zadanie_3d()
{
    char c;
    double n;
    printf("\nPodaj znak i liczbe poziomow: ");
    scanf(" %c %lf", &c, &n);
    getchar();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%c", c);
        printf("\n");
    }
}
int main (){
    przerwa();
    zadanie_3a();
    przerwa();
    zadanie_3b();
    przerwa();
    zadanie_3c();
    przerwa();
    zadanie_3d();
    przerwa();
    return 0;
}