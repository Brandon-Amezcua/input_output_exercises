#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char **argv)
{
  int (*convcase[2])(int) = {toupper, tolower};
  int upper;

  int ch;

  if (argc > 0)
  {
    if (toupper((unsigned char)argv[0][0]) == 'U')
    {
      upper = 0;
    }
    else
    {
      upper = 1;
    }

    while ((ch = getchar()) != EOF)
    {
      ch = (*convcase[upper])((unsigned char)ch);
      putchar(ch);
    }
  }

  return 0;
}
