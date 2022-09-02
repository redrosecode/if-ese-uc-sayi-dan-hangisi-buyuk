#include<stdio.h>
main(){
	int a,b,c,enb;
	printf("Uc sayi giriniz:\n");
	printf("ilk sayiyi giriniz:");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&b);
	printf("Son sayiyi giriniz:");
	scanf("%d",&c);
	if(a>c && a>b)
	{
		enb=a;
		printf("en buyuk %d",enb);
		
	}
	else {
		if(b>c)
	{
		enb=b;
		printf("en buyuk %d",enb);
			}
		else 
		{
	    enb=c;
		printf("en buyuk %d",enb);	}
	}
	}

