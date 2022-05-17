#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,midterm,secim,counter;
char name[50];
FILE *fptr;


while(secim!=-1)
{
printf("1-) create student list \n");	
printf("2-) list students midterm grade higher than 50 \n");
printf("3-) add 10 points midterm grade lower than 50 \n");
printf("4-) to see class average \n");
printf("5-) list all students\n");

	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
		
	fptr=fopen("student.txt","w");
	
	if (fptr==NULL)
	printf("Dosya bulunamadı");
	
	else
	{
		printf("Ogrenci number - Name  - Midterm Grade\n");
	
	scanf("%d %s %d",&num,name,&midterm);
	while(counter!=10){

		fprintf(fptr,"%d  %s  %d \n",num,name,midterm);
	    scanf("%d %s %d",&num,name,&midterm);
		counter++;
			}			
	}	
	fclose(fptr);
		break;
		
		case 2:
		fptr=fopen("student.txt","r");
		for(; ;)
		{	
		fscanf(fptr,"%d  %s  %d",&num,name,&midterm);
		if(feof(fptr)) break;
			if(midterm > 50)	
				printf("%d  %s  %d \n",num,name,midterm);			
	     }
         fclose(fptr);
         break;
         
         
         
         case 3:
         	
         	fptr=fopen("student.txt","r+");
         	for(;;)
         	{
         		fscanf(fptr,"%d",&midterm);
         		if(feof(fptr)) break;
         		
         		if(midterm<50)
         		{
         			midterm =midterm+ 10;
         			fprintf(fptr,"%d",midterm);
         			
				 }	
			 }
			 fclose(fptr);
			 break;
         	
         	case 4:
         		
         		fptr = fopen("student.txt","r");
         		int sum,average;
         	for(; ;)
         	{
         		fscanf(fptr,"%d  %s  %d",&num,name,&midterm);
         		if(feof(fptr)) break;
         		sum+=midterm;
			 }
			 average = sum/10;
			 printf("class average  =  %d\n",average);
			 fclose(fptr);
			 break;
			 
			 case 5:
			 	fptr=fopen("student.txt","r");
		for(; ;)
		{	
		fscanf(fptr,"%d  %s  %d",&num,name,&midterm);
		if(feof(fptr)) break;

				printf("%d  %s  %d \n",num,name,midterm);			
	     }
         fclose(fptr);
         break;
			 	
         		
         		
         		
         	
	}
	
	
}
return 0;	
}
