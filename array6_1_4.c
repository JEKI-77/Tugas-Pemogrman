  #include<stdio.h>
      #define MAKS 9999

     int main (void )
      {

            int n, x, max, nilai[MAKS];

            printf("Masukkan jumlah data=");
            scanf("%d",&n);
     
            for(x=1;x<=n;x++)
            {
                  printf("Masukkan data ke-%d : ",x);
                  scanf("%d",&nilai[x]);
           
                  if(x==1)
                        max=nilai[1];
                  else
                        {
                        if(max<=nilai[x])
                        max=nilai[x];
                        }
            }
            printf("\nNilai MAKSIMUMNYA adalah %d\n\n", max);
      }
