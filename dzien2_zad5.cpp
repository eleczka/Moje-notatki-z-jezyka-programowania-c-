// zadanie 6 wypisz sinusy i cosinusy katow 0 do 180 topni z krokiem co 30 stopni za pomoca petli for

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
