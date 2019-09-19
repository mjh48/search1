#include"Search.hpp"


void Search::fillArray(int a[], int count)
{
  for(int i = 0; i < count; i++)
  {
    a[i] = rand() % 100;
  }
}

int Search::seqSearch(int a[], int count, int target)
{
  for(int i = 0; i < count; i++)
    if(a[i] == target)
      return i;
  return NOT_FOUND;
}


int Search::ibinarySearch(int a[], int count, int target)
{
  int low = 0; 
  int high = count-1;
  while(low <=high)
  {
    int mid = (low+high)/2;
    if(a[mid] == target)
      return mid;
    else if(a[mid] < target)
      low = mid+1;
    else
      high = mid-1; 
  }
  return NOT_FOUND;
}


int Search::rbinarySearch(int a[], int low, int high, int target)
{
   if(low<=high)
   {
    
     int mid = (low+high)/2;
     if(a[mid] == target)
       return mid;
     else if(a[mid] < target)
       return rbinarySearch(a, mid+1,high, target);
     else
       return rbinarySearch(a, low, mid-1, target);
   }
   else
     return NOT_FOUND;
}

void Search::sort(int a[], int count)
{
  for(int i = 0; i < count-1; i++)
    for(int j = i+1; j < count; j++)
      if(a[i]>a[j])
        swap(a[i], a[j]);
}
void Search::swap(int&a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

std::string Search::show(int a[], int count)
{
  std::string list = "";
  for(int i =0; i < count; i++)
  {
    list += std::to_string(a[i]) + " ";
  }
  std::cout << "the list " << list << std::endl;
  return list;
}
