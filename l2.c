#include<stdio.h>	
	
	
int vv(int v)
{
	if(v<10)
	printf("ERROR");
	return v;
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