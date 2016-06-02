#include <stdio.h> 
 int main(void) 
 { 
 	char input[1000], c[100], num[100][61]; 
 	int i, j=0, k=0, a=0, check=0, q, w, e, u; 
	int w1, e1, size=0;
	char result[61];
	char n1[61], n2[61], n3[61], n4[61];
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
 			c[a++]=input[i]; 
 			check=0; 
 		} 
 	} 
 	num[j][k] = '\0'; 
 	c[a] = '\0'; 


	for(q=0; c[q]!='\0'; ++q)
		if(c[q]=='+')
			break;

	for(w=0; num[q][w]!='\0'; ++w)
		n1[w]=num[q][w];

	n1[w]='\0';

	for(e=0; num[q+1][e]!='\0'; ++e)
		n2[e]=num[q+1][e];

	n2[e]='\0';

	w1=w-1;
	e1=e-1;

	for(w=w-1, e=e-1,u=0;((w>=0)||(e>=0)); w--)
	{
		if((w>e)&&(e>=0))
		{
			if(n1[w]+n2[e]-'0'>'9')
			{
				n3[u++]=(n1[w]+n2[e]-'0'-'0')%10+'0';
				n1[w-1]+=((n1[w]+n2[e]-'0'-'0')/10);
			}
			else
				n3[u++]=n1[w]+n2[e]-'0';
		}
		else if((w>e)&&(e<0))
		{
			if(n1[w]>'9')
			{
				n3[u++]=(n1[w]-'0')%10+'0';
				if(w==0)
					n3[u]=(n1[w]-'0')/10+'0';

				else
					n1[w-1]=n1[w-1]+((n1[w]-'0')/10);
			}
			else
				n3[u++]=n1[w];
		}
		
		if(w==e)
		{
			if(n1[w]+n2[e]-'0'>'9')
			{
				n3[u++]=(n1[w]+n2[e]-'0'-'0')%10+'0';
				if((w==0)&&(e==0))
					n3[u]=(n1[w]+n2[e]-'0'-'0')/10+'0';
				else
					n1[w-1]=n1[w-1]+((n1[w]+n2[e]-'0'-'0')/10);
			}
			else
				n3[u++]=n1[w]+n2[e]-'0';
		}

		if((w<e)&&(w>=0))
		{
			if(n1[w]+n2[e]-'0'>'9')
			{
				n3[u++]=(n1[w]+n2[e]-'0'-'0')%10+'0';
				n2[e-1]=n2[e-1]+((n1[w]+n2[e]-'0'-'0')/10);
			}
			else
				n3[u++]=n1[w]+n2[e]-'0';
		}
		else if((w<e)&&(w<0))
		{
			if(n2[e]>'9')
			{
				n3[u++]=(n2[e]-'0')%10+'0'; // '0'
				if(e==0)
					n3[u]=(n2[e]-'0')/10+'0'; //'0'
				else
					n2[e-1]=n2[e-1]+((n2[e]-'0')/10);
			}
			else
				n3[u++]=n2[e];
		}

		e--;
	}
	w=w1;
	e=e1;

	for(i=1; i<=u; i++)
		result[i-1]=n3[u-i];
	result[i]='\0';
 	 
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
    printf("n1[]\n"); 
 	for(i = 0; i <= w; i++){ 
 		printf("%d : %c\n", i+1, n1[i]); 
 	} 
 	printf("n2[]\n"); 
 	for(i = 0; i <= e; i++){ 
 		printf("%d : %c\n", i+1, n2[i]); 
 	} 
 	printf("result[]\n");
	/*
 	for(i = u; i >=0 ; i--){ 
 		printf("%d : %c\n", i+1, n3[i]); 
 	} 
	*/
	printf("%s\n", result);
 	return 0; 
 } 
