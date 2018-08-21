#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>=b)? a:b
int absoluto(int x){
  return (x>0)? x:-x; //Pregunta si x es mayor que 0, sise cumple, devuelve un resultado (x), si no, devuuelve otro (-x)
}
int main(int argc, char *argv[])
{
int a, b,r; 
a=-10;
b=725;
a=absoluto(a);
b=absoluto(b);  
printf ("%d\t%d\n",a,b);
r=a;
a=max(a,b); b= (a-r!=0)? r:b; // Pregunta si (a-r) se cumple la condicion , si se cumple en r;si no, en b;
printf ("%d\t%d\n",a,b);
inicio:
system("pause");
r=a%b; //operador modulo ns devuelve el residuo.
a=b;
printf ("%r=%d\tb=%d\n",r);
b=(r==0)? b:-1;// si r es igual a 0, b guarda a b; si no, guardda -1
asm("mov $0x0,%eax");
goto inicio; //goto controla le flujo de introduccion en un programa de c
salida:
system("PAUSE");	
return 0;
}
