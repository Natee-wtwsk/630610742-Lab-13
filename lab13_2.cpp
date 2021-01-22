#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[][N])
{
	for(int j = 0;j < N;j++)
	{
		cout << "Row " << j+1 << ": ";
		for(int i = 0;i < N;i++)
		{
			cin >> A[j][i];
		}
	}
}

void findLocalMax(const double A[][N], bool B[][N])
{
	for(int j = 0;j < N;j++)
	{
		for(int i = 0;i < N;i++)
		{
			B[j][i] = 0;
		}
	}	
	
	for(int j = 1;j < N-1;j++)
	{
		for(int i = 1;i < N-1;i++)
		{
			if(A[j][i] >= A[j][i-1] && A[j][i] >= A[j][i+1] && A[j][i] >= A[j-1][i] && A[j][i] >= A[j+1][i]) B[j][i] = true;
		}
	}	
}

void showMatrix(const bool B[][N])
{
	for(int j = 0;j < N;j++)
	{
		for(int i = 0;i < N;i++)
		{
			if(B[j][i] == true) cout << 1;
			else cout << 0;
			cout << " ";
		}
		cout << endl;
	}
}