#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main()
{
  char str[SIZE];
  char str2[SIZE];

  printf("Enter A String:\n");
  scanf("%s",&str);

  int len = SIZE;

  for (int i = 0; i < len; i++)
  {
    if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
    {
      str2[i]=str[i];
    }
  }

  printf("The Final String after Sorting Alphabetically = %s\n", str2);
}
