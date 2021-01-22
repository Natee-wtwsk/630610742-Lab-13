#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int n = 1;n < N;n++)
	{
		int i = n;
		while(d[i] > d[i-1] && i > 0)
		{
			T tem = d[i];
			d[i] = d[i-1];
			d[i-1] = tem;

			i--;
		}

		cout << "Pass " << n << ":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout << endl;
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
