Notatki-z-jezyka-programowania-c 


Zadanie 2

Wypisz liczby od -3,5 do 7,5 z krokiem co 0,5 za pomoca petli for i while

```
# include <stdio.h>
 int main(){
     double x=-3.5;
     while(x<=7.5){
    	printf ("%.1lf ",x);
     	x=x+0.5;
	 }
return 0;
}
```
Zadanie 6

 Napisz program wczytujacy n liczb zmiennoprzecinkowych i wyswietl ich sume oraz srednia artmetyczna

```
#include<stdio.h>
int main(){
	double a, suma=0;
	int licznik, ile;
	printf("Podaj ile liczb sumowac i usrednic:");
    scanf("%d", &ile);
for(licznik=1; licznik<=ile;licznik++){
    printf("podaj %d liczbe: ",licznik);
    scanf ("%lf",&a);
	suma=suma+a;
}
	printf("suma=%lf\n", suma);
 printf("srednia=%lf\n", suma/ile);
 return 0;
}
```
Zadanie 6:

wypisz sinusy i cosinusy katow 0 do 180 topni z krokiem co 30 stopni za pomoca petli for

```
#include<stdio.h>
include<math.h>
int main(){
int x; 
for(x=0;x<=180;x=x+30){
printf("sin(%3d)=%7.4lf  ", x,sin(x*M_PI/180));
printf("cos(%3d)=%7.4lf\n", x,cos(x*M_PI/180));
}
return 0;
}
```
Wypisz liczby całkowite od 0 do 23 zadnaie 1 dzien 1
```
# include <stdio.h>
int main(){
	int a=0;
	do{
		printf ("%d\n",a);
		a++;
	}
	while(a<=23);
return 0;
}

```
Zad. 9. Napisać program, który pobiera od użytkownika n liczb i wczytuje je do tablicy. Napisać funkcje, która zwróci ostatnia liczbe tej tablicy podzielna przez 7.
```
#include <stdio.h>
#define rozmiar 5
int jest7 (int dane[]);
int main () {
    int dane[rozmiar];
    int i;
    int x;
    int a;
    for (i = 0; i < rozmiar; i++)
    {
        printf ("\nWprowadz liczbe nr %d: ", i + 1);
        scanf ("%d", &x);
        dane[i] = x;
    }
    for (i = 0; i < rozmiar; i++)
        printf ("\nElemnt %d tablicy ma wartosc: %d\n", i, dane[i]);
    a = jest7 (dane);
    if (a == 1)
        printf ("\n\nNie wystepuje liczba podzielna przez 7");
    else
        printf ("\nOstatnia podana liczba podzielna przez 7 to: %d", a);
    getchar ();
    getchar ();
    return 0;
}
int jest7 (int dane[])
{
    int i;
    int x;
    int a = 1;
    for (i = 0; i < rozmiar; i++)
        if (dane[i] % 7 == 0)
            a = dane[i];
    return a;
}
```
Zad. 11 Napisz funkcje, która transponuje tablice kwadratowa double tab [128] [128] podana jako argument. Napisz i wykorzystaj funkcje void wyswietlMacierz (double m [128] [128], int wierszy, int kol.
# ...
#include <stdio.h>
#define N 128                     
double trans (double tab[N][N], int wierszy, int kolumn);
void wyswietlMacierz (double m[N][N], int wierszy, int kolumn);
int main () {
    double tab[N][N];
    double tabT[N][N];
    double x;
    int i;
    int j;
    int wierszy;
    int kolumn;
    printf ("\nWprowadz ilosc wierszy: ");
    scanf ("%d", &wierszy);
    printf ("\nWprowadz ilosc kolumn: ");
    scanf ("%d", &kolumn);          
    for (i = 0; i < wierszy; i++)       
    {
        for (j = 0; j < kolumn; j++)   
        {
            printf ("\nWprowadz skladowa tablicy [%d,%d]: ", i + 1, j + 1);
            scanf ("%lf", &x);
            tab[i][j] = x;
        }
    }
    printf ("\n");         
    wyswietlMacierz (tab, wierszy, kolumn);
    printf ("\n");             
    for (i = 0; i < wierszy; i++)       
        for (j = 0; j < kolumn; j++)
            tabT[i][j] = tab[i][j];
    trans (tabT, wierszy, kolumn);
    wyswietlMacierz (tabT, kolumn, wierszy); 
    getchar ();
    getchar ();
    return 0;
}
double trans (double tab[N][N], int wierszy, int kolumn)
{
    double tabT[N][N];
    int i;
    int j;
    int k;
    for (i = 0; i < wierszy; i++)       
        for (j = 0; j < kolumn; j++)
            tabT[j][i] = tab[i][j];
    for (i = 0; i < kolumn; i++)      
        for (j = 0; j < wierszy; j++)
            tab[i][j] = tabT[i][j];
}
void wyswietlMacierz (double m[N][N], int wierszy, int kolumn)
{
    int i;
    int j;
    for (i = 0; i < wierszy; i++)
        for (j = 0; j < kolumn; j++)
            printf ("%lf %c", m[i][j], j == kolumn - 1 ? '\n' : ' ');
}
...
