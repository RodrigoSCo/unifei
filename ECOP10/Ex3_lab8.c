#include<stdio.h>

int main()
{

char mer[101];
int x ;
 printf("Insira a string:");
 gets(mer);
    for(x=0;x<101;x++)
    {

      if((mer[x]>96)&&(mer[x]<123))
        mer[x]= mer[x]-32;
      else if((mer[x]>64)&&(mer[x]<91))
        mer[x]= mer[x]+32;
      if(mer[x]==0)
            break;
        }
    printf("\nSua nova string ficou assim: %s", mer);
    return 0;
    }
