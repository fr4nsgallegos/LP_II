#include <iostream>
#include <string>
using namespace std;


 void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void ejer1(int &a,int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

bool pal (char *str)
{
	int i,j;
	i=j=0;
	while (str[j])j++;
	j--;
	while(i<j)
	{
		if(str[i++] != str[j--])
		{
			return 0;
		}
	}
	return 1;
}

void kesimo(int arr[], int n,int k) 
{ 
   int i, j; 
   for (i = 0; i <k; i++){
       for(j=i+1;j<n;j++){
          if(arr[i]>arr[j]){
            swap(arr[i], arr[j]); 
          }
       }  
     } 
  cout<<arr[k-1]<<endl;
       
} 



int pote_rec(int n,int e)
{
    if (e==0)
    {
       cout<<"la respuesta es 1"; 
    } 
    if (e==1)
    {
      return n;
    }
   if (e%2 ==0 ) 
      {
        return pote_rec (n*n, e/2);
        }
  else 
      {
        return n*pote_rec(n,e-1);
      }
    }
  

int pote_ite(int n,int e)
{
    int total=1;
    while(e!=1){
        if(e%2!=0){
            total=total*n;
            e--;
        }
        else{
        n=n*n;
        e=e/2;
        }
    }
    return total*n;
}

  
   
int main()

{
	int a=2;
	int b =4;
	ejer1(a,b);
	cout<< a<<endl<<b<<endl;
	char *str= "asa";
	if (pal(str))
	{
		cout<<"es pal"<<endl;
	}
	
	int h=1000;
    int arr[999];
    for (int i =0; i <1000; i++)
    {
      arr[i]=h;
      h--;
    }
    int n=1000;
    kesimo(arr, n,845); 
	cout<<pote_rec(2,10)<<endl;
    cout<<pote_ite(3,2)<<endl;

	  return 0;

}



  





