#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[52]={0};
    int i,digit;char c;
    for( i=0;i<n;i++){
        c=s[i];
        if(s[i]>='A' && s[i]<='Z'){
            digit= c -'A';
            arr[digit]=1;
        }
        else{
            digit= c -'G';
            arr[digit]=1;
        }
    }
        for(i=0;i<26;i++){
            if(arr[i]==0){
                if(arr[i+26]==0){
                    cout<<"NO";
                    break;
                }
            }
        }   
        if(i==26)
            cout<<"YES";
  return 0;
}