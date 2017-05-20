#include<bits/stdc++.h>
using namespace std;

int main(){

int s;
cin>>s;
while(s--){

    int n,i;
    int res=0;
    cin>>n;
    string h;
    cin>>h;
    if(n%2==0){
            res=1;
        cout<<"no";

    }
   else if(h[0]!=1){
        res=1;
        cout<<"no";

    }
  else{ for( i=0;i<n-1;i++){
        if(i<n/2-1){
            if(h[i+1]-h[i]!=1) {
                    res=1;
                cout<<"no";
                break;
            }

        }
        if(i>n/2) {
            if(h[i]-h[i+1]!=1){
                    res=1;
                cout<<"no";
                break;
            }
        }
    }

    if(i==n-1){
        cout<<"yes";
    }
  }

}
return 0;
}
