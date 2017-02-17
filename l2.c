#include<stdio.h>	
	
	
int vv(int v)
{
	if(v<10)
	printf("ERROR");
	return v;
}


int ss(int s, int v)
{
	int o;
	
	if(v<100){
	if(s<0){
	printf("ERROR");
	}
	if(s<30){
	o=v*0.9;
	}
	if((s<120)&&(s>30)){
	o=v*1.02;
	}
	if((s<240)&&(s>120)){
	o=v*1.06;
	}
	if((s>240)&&(s<366)){
	o=v*1.12;
	}
	}	 
	if(v>100){
	if(s<30){
	o=v*0.9;
	}
	if((s<120)&&(s>30))
	{
	o=v*1.02;
	}
	if((s<240)&&(s>120)){
	o=v*1.06;
	}
	if((s>240)&&(s<366)){
	o=1.12;
	}
	}
	return o;
}		
int main()
{
	int v,s;
	int vvv,sss;
		
	printf("Vvedite razmer vklada(v tisichax):");
	scanf("%d",&v);
	printf("Vvedite srok(v dnyah):");
	scanf("%d",&s);
	
	vvv=vv(v);
	printf("%d\n",vvv);
	
	sss=ss(s,v);
	printf("%d\n",sss);
	
	return 0;
}