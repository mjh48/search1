#include"Search.hpp"
#include<iostream>

int main()
{
  Search s;
  int a[s.MAX];
  int count = s.MAX;
  s.fillArray(a, count);
  std::cout << s.show(a, count) << std::endl;
  int pos = s.seqSearch(a, count,90);
  std::cout << "sequential pos = " << pos << std::endl;  
  s.sort(a,count);
  s.show(a, count);
  pos = s.rbinarySearch(a,0,count-1,90);
  std::cout << "recursive pos = " << pos << std::endl; 
  pos = s.ibinarySearch(a,count,90);
  std::cout << "iterative pos = " << pos << std::endl;   
}
