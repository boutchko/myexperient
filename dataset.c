#include <stdio.h>

int main()
{
	int i;

	for(i=0; i<2; i++)
		printf("%d\n",i);
	// added a command
	return 1;
}
	
void message(int a)
{
  if(a==1)
    printf("C\n");
  else
    printf("B\n");
}
	
int secondary()
{
	int aa = 3;
	return aa;
}
	
