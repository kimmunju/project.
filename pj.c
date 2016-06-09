#include <stdio.h> 
 int main(void) 
 { 
 	char input[1000], c[100], num[100][61]; 
 	int i, j=0, k=0, a=0, check=0, q, w, e, u; 
	int w1, e1, u1, size=0, o, p, m1=0, m2=0;
	int mj=0, o1=0, o2=0, i1=0, i2=0;
	char result[61];
	char n1[61], n2[61], n4[61];
	int n3[61];
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
		if(c[q]=='*')
			break;

	for(o1=0, i=q ; (num[i][o1]!='\0'); ++o1)
	{
		if(num[i][o1]=='.')
		{
			mj=1;
			for(o2=0, i=q; num[i+1][o2]!='\0'; ++o2)
				if(num[i+1][o2]=='.')
					break;
				else
					;
		}
		else
			;

		if((num[i+1][o2]=='.')||(num[i+1][o2]=='\0'))
			break;
	}

	if(num[i][o1]=='\0')
	{
		for(o2=0, i=q; num[i+1][o2]!='\0'; ++o2)
			if(num[i+1][o2]=='.')
			{
				mj=1;
				break;
			}
			else
				;
	}
	
		for(w=0; num[q][w]!='\0'; ++w)
			n1[w]=num[q][w];
	
		n1[w]='\0';
	
		for(e=0; num[q+1][e]!='\0'; ++e)
			n2[e]=num[q+1][e];
	
		n2[e]='\0';
	
		w1=w-1;
		e1=e-1;
		
	if(mj==1)
	{
		for(w=w-1; w>=0; --w)
		{
			m1++;
			if(n1[w]=='.')
				break;
		}

		if(m1==w1+1)
			m1=1;

		for(e=e-1; e>=0; --e)
		{
			m2++;
			if(n2[e]=='.')
				break;
		}

		if(m2==e1+1)
			m2=1;

		w=w1;
		e=e1;

		if(m1==1)
			for(w=0; n1[w]!='\0'; ++w)
				n1[w]=n1[w];
		else
		{
			for(w=0; n1[w]!='.'; ++w)
				n1[w]=n1[w];
			for(; n1[w+1]!='\0'; ++w)
				n1[w]=n1[w+1];
			n1[w]='\0';
		}
		w1=w-1;

		if(m2==1)
			for(e=0; n2[e]!='\0'; ++e)
				n2[e]=n2[e];
		else
		{
			for(e=0; n2[e]!='.'; ++e)
				n2[e]=n2[e];
			for(; n2[e+1]!='\0'; ++e)
				n2[e]=n2[e+1];
			n2[e]='\0';
		}
		e1=e-1;
		
		
	}

	for(i=0; i<=60; ++i)
		n3[i]=0;

	for(w=w-1, e=e-1, u=0, a=0; (w>=0)&&(e>=0); e--)
	{
		n3[u]+=(n1[w]-'0')*(n2[e]-'0');
		++u;
		u1=u;
		if(e==0)
		{
			w--;
			e=e1+1;
			a++;
			u=a;
		}
	}
	u=u1;


	for(a=0; a<u; ++a)
	{
		if(n3[a]>9)
		{
			n3[a+1]+=n3[a]/10;
			n3[a]=n3[a]%10;
		}
		else
			n3[a]=n3[a];
	}
	n3[u]='\0';


	for(i=0; i<u; i++)
		n3[i]+='0';

	w=w1;
	e=e1;


	if(mj==1)
	{
		for(i=0; i<m1+m2-2; ++i)
			n3[i]=n3[i];
		n3[u+1]='\0';
		for(u=u-1; u>=m1+m2-2; --u)
			n3[u+1]=n3[u];
		w=w1;
		n3[m1+m2-2]='.';
	}

	for(i=0;i<=u1;i++)
		n4[i]=n3[i];

	printf("%s", n4);
	return 0;
 } 
/////////////////////////곱하기
#include <stdio.h> 
 int main(void) 
 { 
 	char input[1000], c[100], num[100][61]; 
 	int i, j=0, k=0, a=0, check=0, q, w, e, u; 
	int w1, e1, size=0, o, p;
	int mj=0, o1=0, o2=0, i1=0, i2=0;
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

	for(o1=0, i=q ; (num[i][o1]!='\0'); ++o1)
	{
		if(num[i][o1]=='.')
		{
			mj=1;
			for(o2=0, i=q; num[i+1][o2]!='\0'; ++o2)
				if(num[i+1][o2]=='.')
					break;
				else
					;
		}
		else
			;

		if((num[i+1][o2]=='.')||(num[i+1][o2]=='\0'))
			break;
	}

	if(num[i][o1]=='\0')
	{
		for(o2=0, i=q; num[i+1][o2]!='\0'; ++o2)
			if(num[i+1][o2]=='.')
			{
				mj=1;
				break;
			}
			else
				;
	}
	
	if(mj==1)
	{
		for(i1=0; i1<o1; i1++)
			n1[i1]=num[q][i1];

		n1[i1]='.';

		for(w=0; w<9; w++)
			n1[++i1]='0';

		n1[++i1]='\0';

		for(w=1; num[q][o1+w]!='\0'&&w<=9; w++)
			n1[o1+w]=num[q][o1+w];

		for(i2=0; i2<o2; i2++)
			n2[i2]=num[q+1][i2];

		n2[i2]='.';

		for(w=0; w<9; w++)
			n2[++i2]='0';

		n2[++i2]='\0';

		for(w=1; num[q+1][o2+w]!='\0'&&w<=9; w++)
			n2[o2+w]=num[q+1][o2+w];

	w=i1-1;
	e=i2-1;

	for(i=0; n1[i]!='.'; ++i)
		n1[i]=n1[i];
	
	for(w1=0; w1<9; ++w1)
	{
		n1[i]=n1[i+1];
		++i;
	}
	n1[i]='\0';

	for(i=0; n2[i]!='.'; ++i)
		n2[i]=n2[i];

	for(e1=0; e1<9; ++e1)
	{
		n2[i]=n2[i+1];
		++i;
	}
	n2[i]='\0';
	
	w1=w-1;
	e1=e-1;

	}


	else
	{
		for(w=0; num[q][w]!='\0'; ++w)
			n1[w]=num[q][w];
	
		n1[w]='\0';
	
		for(e=0; num[q+1][e]!='\0'; ++e)
			n2[e]=num[q+1][e];
	
		n2[e]='\0';
	
		w1=w-1;
		e1=e-1;
	}
	
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
	
	if(mj==1)
	{
		for(w1=0; w1<9; ++w1)
			n3[w1]=n3[w1];

		e1=w1;
		w1=u;

		for(; w1>=e1; --w1)
			n3[w1+1]=n3[w1];

		n3[e1]='.';

		u++;
		n3[u+2]='\0';

		w1=w;
		e1=e;
	}
	
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
	
 	for(i = u; i >=0 ; i--){ 
 		printf("%d : %c\n", i+1, n3[i]); 
 	} 
	printf("%s\n", n1);
	printf("%s\n", n2);
	
	printf("%s\n", result);
 	return 0; 
 } 
/////////////////////////////더하기
   #include <stdio.h>
    int main(void)
    {
      char input[1000], c[100], num[100][61];
      int i, j=0, k=0, a=0, check=0, q, w, e, aaa;
      int w1, e1, size=0, o1=0, o2=0, u=0, mj=0, i1=0, i2=0;;
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
         if(c[q]=='-')
             break;

	for(o1=0, i=q ; (num[i][o1]!='\0'); ++o1)
	{
		if(num[i][o1]=='.')
		{
			mj=1;
			for(o2=0, i=q; num[i+1][o2]!='\0'; ++o2)
				if(num[i+1][o2]=='.')
					break;
				else
					;
		}
		else
			;

		if((num[i+1][o2]=='.')||(num[i+1][o2]=='\0'))
			break;
	}

	if(num[i][o1]=='\0')
	{
		for(o2=0, i=q; num[i+1][o2]!='\0'; ++o2)
			if(num[i+1][o2]=='.')
			{
				mj=1;
				break;
			}
			else
				;
	}

	if(mj==1)
	{
		for(i1=0; i1<o1; i1++)
			n1[i1]=num[q][i1];

		n1[i1]='.';

		for(w=0; w<9; w++)
			n1[++i1]='0';

		n1[++i1]='\0';

		for(w=1; num[q][o1+w]!='\0'&&w<=9; w++)
			n1[o1+w]=num[q][o1+w];

		for(i2=0; i2<o2; i2++)
			n2[i2]=num[q+1][i2];

		n2[i2]='.';

		for(w=0; w<9; w++)
			n2[++i2]='0';

		n2[++i2]='\0';

		for(w=1; num[q+1][o2+w]!='\0'&&w<=9; w++)
			n2[o2+w]=num[q+1][o2+w];

	w=i1-1;
	e=i2-1;

	for(i=0; n1[i]!='.'; ++i)
		n1[i]=n1[i];
	
	for(w1=0; w1<9; ++w1)
	{
		n1[i]=n1[i+1];
		++i;
	}
	n1[i]='\0';

	for(i=0; n2[i]!='.'; ++i)
		n2[i]=n2[i];

	for(e1=0; e1<9; ++e1)
	{
		n2[i]=n2[i+1];
		++i;
	}
	n2[i]='\0';

	w1=w-1;
	e1=e-1;

	}
	else
	{
     for(w=0; num[q][w]!='\0'; ++w)
     {
         n1[w]=num[q][w];
         n4[w]=num[q][w];
     }

     n1[w]='\0';

     for(e=0; num[q+1][e]!='\0'; ++e)
         n2[e]=num[q+1][e];

     n2[e]='\0';

     w1=w-1;
     e1=e-1;
	}

     if(w1>=e1)
         size=w1;
     else
         size=e1;

     for(w=w-1, e=e-1;(w>=0)||(e>=0); w--)
     {
         if((w>e)&&(e>=0))
         {
             if(n1[w]-n2[e]>0)
                 result[w]=n1[w]-n2[e]+'0';
             else if(n1[w]-n2[e]==0)
                 result[w]='0';
             else
             {
                 n1[w-1]-=1;
                 result[w]=10+n1[w]-n2[e]+'0';
            }
         }
         else if((w>e)&&(e<0))
         {
             if(n1[w]<'0')
             {
                 n1[w-1]-=1;
                 n1[w]+=10;
             }
             result[w]=n1[w];
         }

         if(w==e)
         {
             if(n1[w]-n2[e]>0)
                 result[w]=n1[w]-n2[e]+'0';
             else if(n1[w]-n2[e]==0)
                 result[w]='0';
             else
             {
                 n1[w-1]-=1;
                 result[w]=10+n1[w]-n2[e]+'0';
            }
         }

         if((w<e)&&(w>=0))
         {
            if(n2[e]-n1[w]>0)
             {
                 result[e+1]=n2[e]-n1[w]+'0';
                 result[0]='-';
             }
             else if(n2[e]-n1[w]==0)
                 result[e+1]='0';
             else
             {
                 result[e+1]=10+n2[e]-n1[w]+'0';
                 n2[e-1]-=1;
                 result[0]='-';
             }
         }
         else if((w<e)&&(w<0))
         {
             if(n2[e]<'0')
             {
                 n2[e-1]-=1;
                 n2[e]+=10;
             }
             result[e+1]=n2[e];
         }

         e--;
     }
     w=w1;
     e=e1;

     if((w1==e1)&&(n1[0]-n2[0]<0))
     {
         for(; w1>=0; --w1)
             n1[w1]=n4[w1];
         w1=w;

         for(; w1>=0; w1--)
         {
             if(n2[e1]-n1[w1]>0)
                 result[e1+1]=n2[e1]-n1[w1]+'0';

             else if(n2[e1]-n1[w1]==0)
                 result[e1+1]='0';
             else
             {
                 result[e1+1]=10+n2[e1]-n1[w1]+'0';
                 n2[e1-1]-=1;
                 if(n2[e1]<'0')
                 {
                     n2[e1-1]-=1;
                     n2[e1]+=10;
                     result[e1+1]=n2[e1]-n1[w1]+'0';
                 }
             }
         result[0]='-';
         e1--;
         }
		 w1=w;
     }

     if(result[0]=='-')
         size++;
     result[size+1] = '\0';

	if(mj==1)
	{
		for(aaa=size; aaa>size-9; --aaa)
			result[aaa+1]=result[aaa];

		result[aaa+1]='.';
		result[size+2]='\0';
	}

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
     for(i = 0; i <= size; i++){
         printf("%d : %c\n", i+1, result[i]);
     }
	 printf("\n%s\n", result);

     return 0;
  }
///////////////////////////뺄셈
///////////save////////////
#include <stdio.h>
#include <string.h>
int main(void)
{
		int i=0, j=0, aaa=0, k=0, check=0, a=0,l=0,m=0, tmp = 0, h=0, d=0;
		char input[1000], num[100][61], c[61];
		char v[10][62];
		FILE *ofp;

		while (1)
		{
				for(i = 0; input[i-1] != '\n'; i++){ 
						input[i] = getchar(); 
				} 
				input[--i] = '\0'; 
				for(i=0;input[i]!='\0';++i)
				{
						aaa=0;
						if(input[i]=='=') {
				              if(((input[0]>='a'&&input[0]<='z')||(input[0]>='A'&&input[0]<='Z'))&&input[1]==' '&&input[2]=='='&&input[3]==' ') 
						{
								aaa=1;
								break;
						}
						}
				}

				if(((input[0]>='A')&&(input[0]<='Z'))||((input[0]>='a')&&(input[0]<='z')))
						for(d=0; d<10; d++)
				//	{
								if(input[0]==v[d][0])
										break;
								else if(input[0]-v[d][0]==32)
										break;
								else if(v[d][0]-input[0]==32)
										break;
				//		}
				if(aaa==1) 
				{
					if(d==10)
					{
						k=0;
			//			for(i=4;input[i]!='\0';i++)
			//			{
			//			   if(input[i]!='0'||input[i]!='1'||input[i]!='2'||input[i]!='3'||input[i]!='4'||input[i]!='5'||input[i]!='6'||input[i]!='7'||input[i]!='8'||input[i]!='9')
						/*	    break*/ ;
			//			   else 
			//		    	{
					for(i=0;input[i]!='\0';++i)
					{
						if(input[i]!='=' && input[i]!=' ')
						{
							v[j%10][k]= input[i];
					          ++k;
					     }
					   }
					++j;
					}
					else
						{
								k=0;
								for(i=0;input[i]!='\0';++i)
								{
										if(input[i]!='=' && input[i]!=' ')
										{
												v[d][k]= input[i];
												++k;
										}	
								}
								v[d][k]='\0';
						}
				}
                

				printf("input[]\n");
				printf("%s\n",input);    

				printf("v[][]\n");
				for (i=0;i<=9;i++)
						printf("%s\n",v[i]);

				for(i=0; i<=9; ++i)
						if(input[0]==v[i][0])
								break;

				if (strcmp(input,"VAR") == 0)
				{  
						for (tmp=0;tmp<=9;tmp++) 
								if(v[tmp][0]!='\0')
								{
										printf("%c = ",v[tmp][0]);
										for(k=1;v[tmp][k]!='\0';k++)			
												printf("%c",v[tmp][k]);
										printf("\n");
										if (v[tmp+1][0]=='\0')
												break;
								} 
								else
								{
										printf("?뺤쓽??蹂???놁쓬\n");
										break;
								}		
				}	
				if ((input[0]>='a'&&input[0]<='z')||(input[0]>='A'&&input[0]<='Z'))
						{		if(input[1]=='\0')
								{			for(i=0; i<=9; ++i)
										if(input[0]==v[i][0])
												break;
										if (input[0] != v[i][0] && strcmp(input,"VAR") != 0)
										{
												printf("= undefined\n");
										}
								}
						}
			    if(input[0]==v[i][0])
						if (v[i][1] != '\0' && aaa==0) 
								{
										printf("= ");
										for(tmp=1; v[i][tmp]!='\0'; ++tmp)
										if(input[1]=='\0')
												printf("%c",v[i][tmp]);
										printf("\n");
								} 


				if(((input[0]>='a'&&input[0]<='z')||(input[0]>='A'&&input[0]<='Z'))&&input[1]==' '&&input[2]=='='&&input[3]==' ') 
				{
			  	if (aaa=1)
				   printf("= ");		
					for (k = 0; v[(j-1)%10][k]!='\0';k++)
						printf("%c", v[(j-1)%10][k+1]);
					printf("\n");
						
				}
//			    //else if(input[i]!='0'||input[i]!='1'||input[i]!='2'||input[i]!='3'||input[i]!='4'||input[i]!='5'||input[i]!='6'||input[i]!='7'||input[i]!='8'||input[i]!='9')
	/*			if((input[0]>='a'&&input[0]<='z')||(input[0]>='A'&&input[0]<='Z'))
					if(input[1]=='\0')
							;
				    else  if (aaa==0 && strcmp(input,"VAR")!=0) 
							printf("= error\n");*/
					     

       		ofp = fopen("save.txt", "w");

		if(strcmp(input, "save")==0)

			for(i = 0;i<10; ++i)
			{
				fprintf(ofp, "%c ", v[i][0]);

				for( j=1; j<strlen(v[i]);++j)
					fprintf(ofp, "%c", v[i][j]);

				fprintf(ofp, "\n");
			}
			fclose(ofp);

	
        /*fp = fopen("save.txt", "r");
		
        while(fscanf(fp, "%s", &data) != EOF){
                printf("%s\n", data);

        }

        fclose(fp\n);*/
		}
				}	
/////////////////////////save/////////////
