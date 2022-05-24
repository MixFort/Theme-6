#include <cmath>
# include <conio.h>
#include <iostream>
using namespace std;

int main()
{const int n=3, m=4;
int A[n][m];
int i, j;
cout<<"Vvedite element A"<<endl;
for(i=0; i<n; i++)
  for(j=0; j<m; j++)
  {
  cin>>A[i][j];
  }
  cout<<"\n Vivod matrici A:"<<endl;
for(i=0; i<n; i++)
  {for(j=0; j<m; j++) cout<<A[i][j]<<" ";
  cout<<endl;
  }
   int sum_s(0), max;
    for(int i = 0; i < n; ++i){
        max = A[i][0];
        for(int j = 1; j < m; ++j){
            if(max < A[i][j])
                max = A[i][j];
        }

        sum_s += max;
}
cout << "summa=" << sum_s;
_getch();
}
