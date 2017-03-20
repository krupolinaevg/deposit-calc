#include <stdio.h>

void vv(int* srok, int*  vklad){
    if (*srok   > 365)
        printf("ERROR\n");
    if (*vklad < 10000)
        printf("ERROR\n");

}

int ss(int* srok, int* vklad){

    int o = 0;

    if(*vklad < 100000){
        if(*srok <= 30){
            o = *vklad * 0.9;
        }
        else if((*srok >= 31)  && (*srok <= 120)){
            o = *vklad  * 1.02;
        }
        else if((*srok  >= 121)  && (*srok <= 240)){
            o = *vklad * 1.06;
        }
        else if((*srok  >= 241)  && (*srok  <= 365)){
            o = *vklad * 1.12;
        }
    }

    if(*vklad > 100000){
        if(*srok  <= 30){
            o = *vklad  * 0.9;
        }
        else if((*srok >= 31)  && (*srok  <= 120)){
            o = *vklad * 1.03;
        }
        else if((*srok  >= 121)  && (*srok  <= 240)){
            o = *vklad * 1.08;
        }
        else if((*srok  >= 241)  && (*srok <= 365)){
            o = *vklad * 1.15;
        }
    }

    return o;
}


int main(){

    int srok, vklad;
    int rez;



    printf("Enter srok vklada\t");
    scanf("%d", &srok);
    printf("Enter razmer vklada\t");
    scanf("%d", &vklad);
    
    vv(&srok, &vklad);
    rez=ss(&srok, &vklad);


    printf("%d\n",rez);

    return 0;
}
 