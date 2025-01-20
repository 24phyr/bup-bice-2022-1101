#include<bits/stdc++.h>
using namespace std;
int table [100];
int F (int n){
if (table[n]!=-1)
return table[n];
return table [n]=F(n-1)+F(n-2);
}
int main(){
int n;
cin>>n;
for (int i=0;i<=n;i++){

    table[i]=-1;
}
table[0]=0;
table[1]=1;
F(n);
for(int i=0; i<=n;i++){
cout<<table [i]<<""<<endl;

}
return 0;
}

