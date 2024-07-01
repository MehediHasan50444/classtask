
#include<bits/stdc++.h>
using namespace std;
void sum(int a[2][2],int b[2][2])
{
    int c[2][2];

    cout<<"Sumation: "<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;

    }

}


void transpose(int a[2][2])
{
    int c[2][2];

    cout<<"Transpose: "<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[j][i];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;

    }
}

void multiplication(int a[2][3],b[3][2])
{
    int c[2][2];

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[j][i];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;

    }

}


int main()
{
    int a[2][2]={2,32,5,56};
    int b[2][2]={54,24,76,5};

    sum(a,b);
    transpose(a);

}
