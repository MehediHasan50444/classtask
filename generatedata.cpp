#include<bits/stdc++.h>
using namespace std;
void generate(int *a,int x){

srand(time(0));
for(int i=0;i<x;i++){
    a[i]=rand();
}
ofstream fout("20.txt");
for(int i=0;i<x;i++){
    fout<<a[i]<<" ";
}

}
int searchL(int *a,int x,int y){
for(int i=0;i<x;i++){
    if(a[i]==y){
        return 1;
    }

}
return 0;
}


int main(){
int x;
cin>>x;
int *a=new int[x];

ifstream fin("20.txt");

for(int i=0;i<x;i++){
    fin>>a[i];


}
generate(a,x);
int y;
cout<<"search a number:";
cin>>y;
cout<<searchL(a,x,y);




}
