#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
    int n,q,t,num=0;
    cin>>n>>q;
    int s[q];
    vector<int> l;
    vector<int> templ;
    for(int i=0;i<n;i++){
        cin>>t;
        l.push_back(t);
    }
    for(int i=0;i<q;i++){
        cin>>s[i];
    }
    for(int i=0;i<q;i++){
            num=0;
            templ=l;
            for(int j=0;j<n;j++){
        if(templ[j]<s[i]&&templ[j]!=0){
            for(int k=0;k<n;k++){
                    if(templ[k]!=0&&k!=j){
                if(templ[j]<s[i]&&templ[k]<=templ[j]){
                    templ[j]++;
                    templ[k]=0;
                }
                if(templ[j]>=s[i]){
                    num+=1;
                    break;
                }
            }
            }

        }
        else if(templ[j]!=0){
            num+=1;
        }
            }
            cout<<"\n"<<num;
    }
}
return 0;
}
