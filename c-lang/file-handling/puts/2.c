#include <stdio.h>
int main()
{
   char ch;
   FILE *fp;
   if (fp = fopen("test.c", "w"))
   {
     ch = getc(stdin);
     while (ch != "a")
     {
        putc(ch, fp);
        ch = getc(stdin);
     }
     fclose(fp);
     return 0;
   }
   return 1;
}
