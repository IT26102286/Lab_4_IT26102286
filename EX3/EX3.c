#include<stdio.h>

int main (void)

{
int fp ; //The fingerprint  
int rt ; //The retinal scan
int ac ; //The access card	

printf("Enter your fingerprint match (1/0):\n");
scanf("%d",&fp);

printf("enter your retinal scan match (1/0):\n");
scanf("%d",&rt);

printf("Enter your access card match (1/0):\n");
scanf("%d",&ac);

if ((fp == 0 && rt == 1 && ac == 1) ||
(fp == 1 && rt == 0 && ac == 1) ||
(fp == 1 && rt == 1 && ac == 0) ||
(fp == 1 && rt == 1 && ac == 1))

{
printf("Access granted.\n");

}	

else if ((fp == 0 && rt == 0 && ac == 0) ||
	(fp == 0 && rt == 0 && ac == 1) ||
	(fp == 0 && rt == 1 && ac == 0) ||
	(fp == 1 && rt == 0 && ac == 0))
{

printf("Access denied.\n");

}
else{
printf("Invalid input!\n");

}
return 0;
}
	
