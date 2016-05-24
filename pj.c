#include <stdio.h>
int main(void)
{
	char input[1000], c[100], num[100][61];
	int i, j=0, k=0, a=0, check=0;
	for(i = 0; input[i-1] != '\n'; i++){
		input[i] = getchar();
	}
	input[--i] = '\0';

	for(i=0; input[i] != '\0'; i++){
		if((input[i] >= '0')&&(input[i] <= '9')||(input[i]=='.')){
			num[j][k++] = input[i];
			check = 1;
		}
		else if(input[i]==' ')
		{
			if(check)
			{
				num[j][k] = '\0';
				j++;
				k = 0;
			}
		}
		else
		{
			j++;
			k = 0;
			c[a++]=input[i];
			check=0;
		}
	}
	num[j][k] = '\0';
	c[a] = '\0';
	/*
	printf("input[]\n");
	printf("%s\n", input);
	printf("num[][]\n");
	for(i = 0; i <= j; i++){
		printf("%d : %s\n", i+1, num[i]);
	}
	printf("c[]\n");
	for(i = 0; i < a; i++){
		printf("%d : %c\n", i+1, c[i]);
	}
	*/
	return 0;
	rdtddfjlksdkjltqenrmbzfb
}
