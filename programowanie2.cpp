zadanie 2 wypisz liczby od -3,5 do 7,5 z krokiem co 0,5 za pomoca petli for i while

# include <stdio.h>
 int main(){
     double x=-3.5;
     while(x<=7.5){
     	printf ("%.1lf ",x);
     	x=x+0.5;
	 }
 return 0;
}
