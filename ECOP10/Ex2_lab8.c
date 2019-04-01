#include<stdio.h>

int main()
{
 char mer[101];
 int x, y, a = 0, e = 0, i = 0, o = 0, u = 0;
 printf("Insira a string:");
 gets(mer);
    for(x=0;x<101;x++)
    {
      if((mer[x]=='a')||(mer[x]=='A')){
        mer[x]='*';
        a++;
        }
         if((mer[x]=='e')||(mer[x]=='E')){
        mer[x]='*';
        e++;
        }
         if((mer[x]=='i')||(mer[x]=='I')){
        mer[x]='*';
        i++;
         }
        if((mer[x]=='o')||(mer[x]=='O')){
        mer[x]='*';
        o++;
        }
         if((mer[x]=='u')||(mer[x]=='U')){
        mer[x]='*';
        u++;
        }
        if(mer[x]==0)
            break;
    }
    printf("\nSua nova string ficou assim: %s", mer);
    printf("\nQuantidade de vogais: ");
     printf("\nLetra a = %i", a);
     printf("\nLetra e = %i", e);
     printf("\nLetra i = %i", i);
     printf("\nLetra o = %i", o);
     printf("\nLetra u = %i", u);


  return 0;

}
