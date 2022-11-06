 #include <stdio.h>
   int main (void)
      {
            int f, fbc[999]={0,1}, x;

            printf("Masukkan batas dari deret fibonanci : ");
            scanf("%d",&f);

            for (x=1; fbc[x]<=f; x++)
            {
                  printf("%d, ", fbc[x]);
           
                  fbc[x+1]=fbc[x]+fbc[x-1];
            }
     
            printf("\n");

      }