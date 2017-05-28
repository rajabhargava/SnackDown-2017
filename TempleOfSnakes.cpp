#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--) {
    int n;
    cin>>n;
    int b[n];
    for(int i = 0; i < n; i++) {
        cin>>b[i];
    }
    int op = 0;
    for(int i = 0; i<n; i++) {
            if(i<n/2) {
        if(b[i+1]-b[i]!=1) {
            if(b[i+1]>b[i]) {
                b[i+1]-=1;
                i--;
                op++;
            }
            else  {
                b[i]-=1;
                i--;
                op++;
            }
        }
            }
            if(i>=n/2 && i!=n-1) {
                if(b[i]-b[i+1]!=1) {
                    if(b[i]>b[i+1]) {
                        b[i]-=1;
                        i--;
                        op++;
                    }
                    else {
                        b[i+1]-=1;
                        i--;
                        op++;
                    }
                }
            }
    }
    cout<<"\n"<<op;

}
return 0;
}
