// To swap two number 
// Input : a=5 , b = 4
// Output : a=4 , b=5

#include<stdio.h>

void swapNumber(int a,int b){
  int temp = a;
  a = b;
  b = temp;
  printf("\nAfter swapping a is %d, b is %d", a,b);
}

// a =5 b =4
// a = a + b = 5 + 4 = 9
// b = a - b = 9 - 4 = 5
// a = a - b = 9 - 5 = 4
void swapNumberBySum(int a, int b){
  a = a + b ;
  b = a - b ;
  a = a - b ;
  printf("\nMethod2 After swapping a is %d, b is %d", a,b);
}

int main()
{
  printf("Enter two number: ");
  int a,b;
  scanf("%d %d",&a, &b);
  printf("Before swapping a is %d, b is %d", a,b);  
  swapNumber(a,b);
  swapNumberBySum(a,b);
}
