// сформировать массив, каждый элемент которого равен произведению положительных предыдущих
#include <iostream>

const int C=3;		// #define C 10

int main()
{
 int a[C],p[C];
 std::cout<<"Enter elements:\n";
 for (int i=0;i<C;i++) std::cin>>a[i];
 if (a[0]<=0)
 {
  std::cout<<"\nwrong value of the first element";
  return -1;
 }
 p[0]=a[0];
 for (int i=1;i<C;i++) 
 {
  if (a[i]>0) p[i]=p[i-1]*a[i];
  else p[i]=p[i-1];
 } 

 for (int i=0;i<C;i++) std::cout<<p[i]<<"  ";

 return 0;
}