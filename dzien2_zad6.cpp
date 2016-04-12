zadanie 6 napisz program wczytujacy n liczb zmiennoprzecinkowych i wyswietl ich sume oraz srednia artmetyczna

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
