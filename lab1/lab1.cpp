# include <iostream>
# include <conio.h>
# include <cstdlib>
using namespace std;
void vvod(int a[], int n);
void vivod(int a[], int n);
void zamena(int a[], int n);
int main()
{
    int a[20];
    int n,k;
    cout<<"Vvedite colichestvo elementov massiva";
    cin>>n;
    do
    {
        cout<<"1. Vvod massiva a"<<endl;
        cout<<"2. Vivod chisel a"<<endl;
        cout<<"3. Zamena elementov massiva a nulyami"<<endl;
        cout<<"4. Konec raboti";
        cin>>k;
        switch(k)
        {
            case 1: vvod(a,n);
            break;
            case 2: vivod(a,n);
            break;
            case 3: zamena(a,n);
            break;
            case 4: cout<<"Konec raboti"<<endl;
            break;
            default: cout<<"Takogo punkta net";
        }
        if (k==4) break;
    }
    while(true);
    _getch();
}
void vvod(int a[], int n)
{
cout<<"Vvedite elementy massiva"<<endl;
 for(int i=0;i<n;i++)
 cin>>a[i];
}
void vivod(int a[], int n)
{cout<<"Massiv a"<<endl;
 for(int i=0;i<n;i++)
 cout<<a[i]<<"\t";
 cout<<endl;
 }
 void zamena(int a[], int n)
 {
     int max=0, min=1000;
     for (int i = 0; i < n; i++){
        if (a[i] < min)
            min = a[i];
                if (a[i] > max)
            max = a[i];
    }
    cout << "Min = " << min << "\nMax = " << max << endl;
    for(int i=0;i<n;i++)
 if(a[i]<max && a[i]>min) a[i]=0;
 }
