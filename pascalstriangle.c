#include<stdio.h>
int main()
{
int rows,c,space, i, j;
printf("Enter the number of rows ");
scanf("%d",&rows);
printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(" ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
c=1;
else
c= c*(i-j+1)/j;

printf("%4d", c);
}
printf("\n\n");
}

return 0;
}
