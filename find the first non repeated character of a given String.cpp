#include<iostream>
#include<string>
 using namespace std;

 void NonRepeting(string s){
     int size;
     char a;
     size=s.length();
     int arr[size]={0};
     for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(s[i]==s[j]){
                    arr[i]++;
                }
            }

     }
     for(int i=0;i<size;i++){
        if(arr[i]==1){
            a=s[i];
            break;
        }
     }
     cout<<a;

 }

 int main(){
     string s;
     cin>>s;
     NonRepeting(s);
return 0;
}
