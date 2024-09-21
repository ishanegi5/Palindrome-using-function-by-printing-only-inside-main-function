#include<stdio.h>
int palindrome(int num)
{  int x,reverse=0,copiedNum;
    copiedNum=num;
    while(copiedNum!=0)
    {
  x=copiedNum%10;
  reverse=reverse*10+x;
  copiedNum/=10;
    }
  if(num==reverse)
  {
  return 1;
  }
  else{
      return 0;
  }
}
void main()
{ int num;
printf("enter num= ");
scanf("%d",&num);

if(palindrome(num)){
    

printf("%d is palindrome number.",num);
}
else{
    printf("%d is not a palindrome number.",num);
}
}
