#include<stdio.h>
int main (void)
{
float s1;
float s2;
float s3;

float avg;

printf("Enter the mark section 1:");
scanf("%f", &s1);


printf("Enter the mark section 2:");
scanf("%f", &s2);

printf("Enter the mark section 3:");
scanf("%f", &s3);

int sum = s1 + s2 + s3;

 avg = (s1 + s2 + s3) / 3 ;

if((s1 >= 70 && s2 >= 70 && s3 >= 70 && avg >= 75))
	
{printf("pass\n");}

else 
{printf("fail\n");}

return 0;



}
