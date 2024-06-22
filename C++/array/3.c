#include <stdio.h>

int main()
{
   char *str[4] ={"Diwali","Christmas","Ramzan","Holi"};
   int k=4>>2;
   char c = *(str[k]+2);
   c+=2;
   printf("%s",c);

    return 0;
}
