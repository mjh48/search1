#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>

class Search
{
  public:
    const int NOT_FOUND = -1;
    const int MAX = 20;

    void fillArray(int a[], int count);
    int seqSearch(int a[], int count, int target);
    int rbinarySearch(int a[], int low, int high, int target);
    int ibinarySearch(int a[], int count, int target);

    std::string show(int a[], int count);
    void sort(int a[], int count);
    void swap(int& a, int &b);
  private:
    
};
