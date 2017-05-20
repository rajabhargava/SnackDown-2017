#include<bits/stdc++.h>
using namespace std;

int main(){

int s;
cin>>s;
while(s--){

    int n,i;
    int res=0;
    cin>>n;
    int h[n];
    for(int j=0;j<n;j++)
        cin>>h[j];

    if(n%2==0||h[0]!=1){
            res=1;
        cout<<"\n no";

    }

  else{
        for( i=0;i<n-1;i++){

            if(i<=n/2-1&&h[i+1]-h[i]!=1) {
                    res=1;
                cout<<"\n no";
                break;
            }

            if(i>=n/2&&h[i]-h[i+1]!=1){
                    res=1;
                cout<<"\n no";
                break;
            }
    }

    if(i==n-1||res==0){
        cout<<"\n yes";
    }
  }

}
return 0;
}
