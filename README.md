Notatki-z-jezyka-programowania-c++ 


Zadanie 2

Wypisz liczby od -3,5 do 7,5 z krokiem co 0,5 za pomoca petli for i while
```
## include <stdio.h>
## int main(){
##     double x=-3.5;
##     while(x<=7.5){
##     	printf ("%.1lf ",x);
##     	x=x+0.5;
##	 }
## return 0;
##}
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
#include<math.h>
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
