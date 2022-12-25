#include<iostream>
using namespace std; 
int main ()
{
    int m, n, p, q, i, j,k, A[50][50], B[50][50], C[50][50];
    cout << "Enter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q; 
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];		
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++){
            C[i][j] = C[i][j]+A[i][k]*B[k][j];
            }
        }    
    cout << "Multiplicatoin of matrix\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";	
        cout << "\n";
    }
    return 0;
}