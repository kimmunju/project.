#include <stdio.h>
    int main(void)
    {
      char input[1000], c[100], num[100][61];
      int i, j=0, k=0, a=0, check=0, q, w, e;
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
         if(c[q]=='-')
             break;

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
             {
                 printf("n2:%d///n1:%d",n2[e1], n1[w1]);
                 result[e1+1]=n2[e1]-n1[w1]+'0';
             }

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
     }

     if(result[0]=='-')
         size++;
     result[size+1] = '\0';

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
     for(i = 0; i <= size ; i++){
         printf("%d : %c\n", i+1, result[i]);
     }
     return 0;
  }
#include <stdio.h>
int main(void)
{
		int i=0, j=0, aaa=0, k=0, check=0, a=0,l=0,m=0, tmp = 0;
		char input[1000], num[100][61], c[61];
		char v[10][62];

		while (1)
		{
				for(i = 0; input[i-1] != '\n'; i++){ 
						input[i] = getchar(); 
				} 
				input[--i] = '\0'; 
				for(i=0;input[i]!='\0';++i)
				{
						aaa=0;
						if(input[i]=='=')
						{
								aaa=1;
								break;
						}
				}

				if(aaa==1) 
				{
						k=0;
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

				/* 
				   printf("input[]\n");
				   printf("%s\n",input);    

				   printf("v[][]\n");
				   for (i=0;i<=9;i++)
				   printf("%s\n",v[i]);

				   for(i=0; i<=9; ++i)
				   if(input[0]==v[i][0])
				   break;
				 */

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
						if(input[1]=='\0')
								for(i=0; i<=9; ++i)
										if(input[0]==v[i][0])
												break;
				if(input[0]==v[i][0])
						if (v[i][1] != '\0' && aaa==0) 
						{
								printf("= ");
								for(tmp=1; v[i][tmp]!='\0'; ++tmp)
										printf("%c",v[i][tmp]);
								printf("\n");
						}

				if (input[0] != v[i][0] && strcmp(input,"VAR") != 0 && aaa==0)
						printf("= undefined.\n");	  	


				//				for(i=0;input[i]!='\0';i++)
				//				if ((input[i+4] >= '0' && input[i+4] <= '9'))
				//				{
				if (aaa==1)	
				{
						printf("= ");		
						for (k = 0; v[(j-1)%10][k]!='\0';k++)
								printf("%c", v[(j-1)%10][k+1]);
						printf("\n");
				}
				//				}
				//              else
				//					;
		} 
}
