//Write a C program to solve for the values of a quadratic equation...
#include <stdio.h>
#include <math.h>
void main(){
float a,b,c,d,root1,root2,real,img;
 printf("n\ To find the root of a quadratic equation...");
  printf("n\ Enter coefficients a,b,c:");
  scanf("%f%f%f",a,b,c);
  d=b*b-4*a*c;
   if(d>0){
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
     printf ("\n\t root1=%2.f and root2=%2.f",root1,root2);
     }
     else if(d==0){
        root1=root2=-b/(2*a);
         printf ("root1=root2=%2.f",root1);
         }
         else{
            real=-b/(2*a);
            img=sqrt(-d)/(2*a);
            printf ("root1=%.2f + %2i and root2=%2.f -%2i",real,img,real,img);
        }
}

