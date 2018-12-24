#include <iostream> //Nama Umar Ibnu Zainal M
using namespace std; //NIM 311810909
void logika()
{
	int a[5];
	int b[5];
	for(int i=1;i<=5;i++)
	{
		cout<<"Masukan nilai indeks ke-"<<i-1<<" : ";
		cin>>a[i];
		b[i]=a[i];
	}
	cout<<"Array A = {";
	for(int j=1;j<=5;j++)
		{
			cout<<a[j]<<",";
		}
			cout<<"\b}";
	cout<<"\nArray B = {";
	for(int k=1;k<=5;k++)
		{
			cout<<b[k]<<",";
		}
			cout<<"\b}";
}

int main()
{
	logika();
}
