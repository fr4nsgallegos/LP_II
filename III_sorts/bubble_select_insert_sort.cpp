#include <iostream>
using namespace std;

void ordenamientoburbuja(int *A,int n){
	int temp;
	int j;
	 for (int i=1; i<n; i++){
	 
          for ( j=0 ; j<n - 1; j++){
		  
               if (A[j] > A[j+1]){
			   
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;}
				}}
}

void Ordenamiento_selec(int *a, int n)
{
	int min,aux;
	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{	min=j;
			}
		}
		aux=a[min];
		a[min]=a[i];
		a[i]=aux;
	}
}

void ordenamiento_inserc(int *A, int n){
	int cont = 0;

	for (int i = 1; i < n; i++) {
		int y = A[i];
		int j = i - 1;

		while ((j >= 0) && (A[j] > y)) {
			A[j + 1] = A[j];
			j--;
			cont++;
		}

		A[j + 1] = y;
	}

	
}


int main (){
	int n=7;
	int array[]={5,4,2,7,8,9,7};
	int *a = array;
	 Ordenamiento_selec(array,n);
	 //ordenamientoburbuja(array,n);
	 //ordenamiento_inserc(array,n);


	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	return 0;

}

