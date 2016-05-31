  #include <stdio.h>
  int main(void)
  {
     char input[1000], c[100], num[100][61];
     int i, j=0, k=0, a=0, check=0, q, w, e;
     int w1, e1;
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
             n1[w]=num[q][w];

         n1[w]='\0';

         for(e=0; num[q+1][e]!='\0'; ++e)
             n2[e]=num[q+1][e];

         n2[e]='\0';

         w1=w-1;
         e1=e-1;

       for(w=w-1, e=e-1;(w>=0)||(e>=0); w--)
         {
             if((w>e)&&(e>=0))
             {
                 if(n1[w]-n2[e]>0)
                     result[w]=n1[w]-n2[e];
                 else if(n1[w]-n2[e]==0)
                     result[w]=0;
                 else
                 {
                     n1[w-1]-=1;
                     result[w]=10+n1[w]-n2[e];
                 }
             }
             else if((w>e)&&(e<0))
                 result[w]=n1[w];

             if(w==e)
             {
                 if(n1[w]-n2[e]>0)
                     result[w]=n1[w]-n2[e];
                 else if(n1[w]-n2[e]==0)
                     esult[w]=0;
                 else 
                 {
                     n1[w-1]-=1;
                     result[w]=10+n1[w]-n2[e];
                 }
             }
             result[w+1]='\0';
             e--;

         if(w<e)
             {
                 if(n2[e]-n1[w]>0)
                 {
                     result[e+1]=n2[e]-n1[w];
                     result[0]='-';
                 }
                 else if(n2[e]-n1[w]==0)
                     result[e]==0;
                 else
                 {
                     n2[e-1]-=1;
                     result[e+1]=10+n2[e]-n1[w];
                     result[0]='-';
                 }
             }
         }
         for(; (w1>=0)&&(e1>=0); w--)
         {
             e--;
             if((w1==e1)&&(n1[0]-n2[0]<0))
             {
                 result[w1+1]=n2[e]-n1[w];
                 result[0]='-';
             }
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
     for(i = 0; i <= w1; i++){
         printf("%d : %c\n", i+1, n1[i]);
     }
     printf("n2[]\n");
     for(i = 0; i <= e1; i++){
         printf("%d : %c\n", i+1, n2[i]);
     }
     printf("result[]\n");
     for(i = 0; i <= w1 ; i++){
         printf("%d : %c\n", i+1, result[i]);
     }
     return 0;
  }
