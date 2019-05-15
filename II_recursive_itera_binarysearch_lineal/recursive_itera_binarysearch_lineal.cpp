#include <iostream>
using namespace std;
 
//void asasas_sort(int *a, int n)

bool recursive_bina(int x, int* array ,int n, int l, int r)
{
  int m=(l+r)/2;
  if (array[m]=x)
  {  
    return true;
  }
  else if (array[m]<x)
  {
    recursive_bina(x,array,n, l=m+1, r);
    cout<<array[m]<<endl;
  }
  else if (array[m]>x)
  {
    recursive_bina(x,array,n, l, r=m-1); 
  }
  return false;
}
bool binary_search_iter (int x, int* array ,int n)
{
  int m;
  int i=0;
  int j=n-1;
  while (i<=j)
  {
    m=(i+j)/2;
    if(array[m]==x)
    {
      return true;
    }
    else if(array[m]>x)
    {
       cout<<array[m]<<endl;
      j=m-1;
    }
    else if (array[m]<x) {
        i=m+1;
        cout<<array[m];
    }
  }
  return false;
}

bool lineal(int x, int* array, int n)
{
  for (int i=0; i<n-1; i++)
  {
    if (array[i]==x)
    {
      return true;
    }
  }
    return false;
}

int main() 
{
	int n;
	int *array;
	int a[] = {1,5,10,12,16,17,19};
	array = a;
	n=7;
	if ( binary_search_iter(10, array , n))
	{
		cout<< "fue encontrado"<<endl;
	}
	if (recursive_bina(10, array , n,0,6))
	{
		cout<< "escontrado"<<endl;
	}
	return 0;
  
}
