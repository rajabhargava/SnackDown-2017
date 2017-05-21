#include<bits/stdc++.h>
using namespace std;

int main(){

int r;
cin>>r;
while(r--){
    int l;
    cin>>l;
    char str[l];
    cin>>str;
    char ch;
    int res=1,num=0;

    for(int k=0;k<l;k++){
        if(str[k]!='.'&&str[k]=='T'){
            res=0;
            cout<<"\nInvalid";
            break;
        }
        else if(str[k]!='.'&&str[k]=='H'){
            break;
        }
    }
         if(res==1){
                    for(int i=0;i<l-1;i++) {
                    if(str[i]!='.'){
                        num=num+1;
                        ch=str[i];
                        for(int j=i+1;j<l;j++){
                            if(str[j]!='.'&&str[j]!=ch){
                                break;
                            }
                            else if(str[j]!='.'&&str[j]==ch){
                                cout<<"\nInvalid";
                                res=0;
                                break;
                            }
                        }
                        if(res==0){
                            break;
                        }

                    }

            }
            if(str[l-1]!='.') {
                    num=num+1;
         }
         }

    if(res==1&&num%2==0){
        cout<<"\nValid";
    }
    else if(res==1&&num%2!=0){
        cout<<"\nInvalid";
    }

}
return 0;
}
