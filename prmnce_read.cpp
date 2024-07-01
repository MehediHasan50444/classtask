#include<bits/stdc++.h>
using namespace std;
void linear_Search(int a[], int n, int num){
    int count=0;
    bool found = false;
    for(int i=0; i<n; i++) {
        if(a[i]==num) {
            cout<<num<<" Number found at index "<<i<<endl;
            found=true;
            count++;
        }
    }
    if(!found)
    {
        cout<<"Number not found..!"<<endl;
    }
    else
    {
        cout<<"This number exist
    }
}
void data_generate(int n,int data){
    ofstream data_generate("100K.txt");
    for(int i=0;i<n;i++){
        data=rand();
        data_generate<<data<<endl;
    }
    data_generate.close();
}
void data_read(int n, int a[]){
    ifstream data_read("100K.txt");
    for(int i = 0; i < n; i++){
        data_read >> a[i];
    }
    data_read.close();
}
int main()
{
    int num,n=100000;
    srand(time(0));
    int data;
    int *a=new int[n];

    data_generate(n,data);
    data_read(n,a);

    cout<<"Enter the number to search: ";
    cin>>num;

    linear_Search(a,n,num);

    return 0;
}
