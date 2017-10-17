#include <stdio.h.>
int main(void)
{
 	char ch;
	int i;

while((ch=getchar())!=EOF)
{
printf("\n");
for(i=0;  i<ch-48;  i++)
printf("%d",ch-48);
}
return 0;
}