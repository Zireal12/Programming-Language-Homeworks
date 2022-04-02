#include <stdio.h>
#include <stdlib.h>

int *dizibirlestir(int[] , int , int[] , int);

int main()
{
	
int dizi1[5] = {11,22,33,44,55};
int dizi2[7] = {5,10,15,20,25,30,35};

int *ptr;
ptr = dizibirlestir( dizi1 , 5 , dizi2 , 7 );

for(int i = 0 ;i<12;i++)
printf("%d\n",ptr[i]);
	
}

int *dizibirlestir(int dizi1[], int dizi1boyut, int dizi2[], int dizi2boyut) 
{
int i,k;
int *sonucdizi = (int*)calloc(dizi1boyut+dizi2boyut,sizeof(int));

for(i = 0;i<dizi1boyut;i++)
sonucdizi[i] = dizi1[i];

for(k = 0;k<dizi2boyut;i++,k++)

sonucdizi[i] = dizi2[k];
	
int j,x,a;
for(j=0; j<12;j++){
	for(x=0;x<12;x++)
	{
	if  (sonucdizi[j]<=sonucdizi[x] ){
	a = sonucdizi[x];
	sonucdizi[x] = sonucdizi[j];
	sonucdizi[j] = a;	
		
	}
	  
	  
	}
}

return sonucdizi;


}


