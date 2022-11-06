
#include<stdio.h>
#include<conio.h>

#define maks 100
void input(int);
int main(){
int n;
  printf("\n\t*********************************************
*************\n");
  printf("\t\tMENAMPILKAN ISI VARIABLE ARRAY of INT");
  printf("\n\t*********************************************
*************\n");
  printf("\nMasukkan batas n: ");
  scanf("%d", &n);
  input(n);
  getch();
}
void input(int n){
  int a[maks],i;
  for(i=0;i<n;i++) {
       printf("Masukkan data ke-%d=", i+1);
       scanf("%d", &a[i]);
}