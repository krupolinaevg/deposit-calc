#include <stdio.h>
#include "deposit.h"

int main(){

    int srok, vklad;
    int rez;



    printf("Enter srok vklada:    ");
    scanf("%d", &srok);
    printf("Enter razmer vklada:  ");
    scanf("%d", &vklad);
  
    if (srok > 365){
    
        printf("ERROR\n");
        return 0;
        }
     else if(vklad <10000){
      printf("ERROR\n");
        return 0;

     }   
     else{
       
        
      
    //vv(&srok, &vklad);
    rez=ss(&srok, &vklad);


    printf("%d\n",rez);
    }
    return 0;
}
 