#include<stdio.h>
#include <locale.h>

 int main()
 {
   setlocale(LC_ALL, "Turkish");
   int i, num, n, count;
   printf("Say� gir: ");
   scanf("%d", &n);
   printf("1 - %d Aras� Asal Say�lar:\n",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }

  return 0;
 }

