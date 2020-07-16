#include <stdio.h>
#define STR_MAX 21

int main(void) 
{
  // incompleted type (initialization with string)
  char name[STR_MAX] = {0, };
 
  // declare with size and initialization with string.
  char addr[STR_MAX] = "test@naver.com";

  int data = 5;
  int result = 0;

  // input the string
  printf("Enter your name (under the %d): ", STR_MAX);
  scanf("%[^\n]s", name);

  // print the string
  printf("Name: %s\n", name);
  printf("Addr: %s\n", addr);

  // operators practice
  result = data % 2;
  printf("Op output: %d, %d\n", data, result); // 5, 1

  result = data << 5;
  printf("Op output: %d, %d\n", data, result); // 5, 150

  result = (data << 4) + 3;
  printf("Op output: %d, %d\n", data, result); // 5, 83

  result = data == 5;
  printf("Op output: %d, %d\n", data, result); // 5, 1

  result = data != 5 && (data = 0);
  printf("Op output: %d, %d\n", data, result); // 5, 0

  result = --result && (data = 0);
  printf("Op output: %d, %d\n", data, result); // 0, 0

  result = result-- && (data = 0);
  printf("Op output: %d, %d\n", data, result); // 0, 0

  result = result-- || (data = 0);
  printf("Op output: %d, %d\n", data, result); // 0 ,0

  return 0;
}