#include <stdio.h>
#include <string.h>

void test(void)
{
  printf("hello\n");
}

int sum(int a, int b)
{
  unsigned char buf[8] = {0};
  void (*ptr)(void) = test;
  int val = (int)ptr;
  int code[] = {val, val, val, val, val, val, val, val};

  memcpy(buf, code, sizeof(code));

  return 4;
}

int main(void)
{
  sum(10, 20);
  return 0;
}
