#include <stdio.h>

int main()
{
   char data[256];
   char hash[16];

   // Generate the random data
   for (int i = 0; i < 256; i++)
   {
      data[i] = i+1;
   }

   for (int i = 0; i < 256 - 1; i++)
   {
      hash[i / 16] = data[i] ^ data[i + 1];
   }

   for (int i = 0; i < 16; i++)
   {
      printf("%d \n", hash[i]);
   }

   return 0;
}


