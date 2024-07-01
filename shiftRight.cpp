
#include<iostream>
using namespace std;
void printList(int *A, int n){
    for(int i=0; i<n; i++)
        cout<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
}
void shiftLeft(int *A, int n){
    for(int i=0; i<n-1; i++){
        A[i] = A[i+1];
        cout<<*(A+i)<<" "<<A[i]<<endl;
    }
}
void shiftLeft(int *A, int n,int k){
    for(int j=0; j<k; j++){
            for(int i=0; i<n-1; i++){
            A[i] = A[i+1];
            cout<<*(A+i)<<" "<<A[i]<<endl;
        }
    }
}

void shiftRight(int *A, int n){
    for(int i=n; i>0; i--){
        A[i] = A[i-1];
        cout<<*(A+i)<<" "<<A[i]<<endl;
    }
}


int main(){
    int a[5]={10,20,30,40,50};
    printList(a,5);
    cout<<endl;
    cout<<"shiftLeft:"<<endl;
    shiftLeft(a,5);
    cout<<endl<<endl;
    cout<<"shiftLeft:"<<endl;
    shiftLeft(a,5,2);
    cout<<endl<<endl;
    cout<<"shiftRight:"<<endl;
    shiftRight(a,5);

    return 0;
}
