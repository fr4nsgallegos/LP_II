#include <iostream>
#include <string>
using namespace std;


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

	cout<<pote_rec(2,10)<<endl;
    cout<<pote_ite(3,2)<<endl;

	  return 0;

}


