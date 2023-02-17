#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void biendoi (int a[][100],int m , int n,int b[][100]){
	for (int i=0;i<m;i++)
			for (int j=0;j<n;j++)
				if (a[i][j]==1) {
					for (int k=0;k<m;k++)
						b[k][j]=1;
						for (int l=0;l<n;l++)
						b[i][l] =1;
				}
	
}
int main ()
{
	int m,n,s=0;
	cin>>m>>n;
	int a[100][100],b[100][100];
	for (int i=0;i<m;i++)
		for (int j=0;j<n; j++) cin >>a[i][j];
	biendoi (a,m,n,b);
		for (int i=0;i<m;i++) {
		for (int j=0;j<n; j++) cout << b[i][j] <<" ";
		cout <<endl;}
	return 0;	
	
}
