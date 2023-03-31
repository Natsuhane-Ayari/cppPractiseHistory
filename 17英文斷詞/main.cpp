#include <iostream>
using namespace std;
int split(string s,string *p){
    int pd=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            pd+=1;
            continue;
        }
        p[pd]+=s[i];
    }
    return 0;
}
int A2a(string *p){
    for(int i=0;i<p[0].length();i++){
        if(p[0][i]==' '){
            continue;
        }
        if(p[0][i]>=65 && p[0][i]<=90){
            p[0][i]=p[0][i]+32;
        }
    }
    return 0;
}
int main(void){
    string sou;
    int souD=1;
    //string a[3];
    getline(cin,sou);
    for(int i=0;i<sou.length();i++){
        if(sou[i]==' '){
            souD+=1;
        }
    }
    string a[souD];
    A2a(&sou);
    split(sou,&a[0]);
    int co=0;
    for(int i=0;i<souD;i++){
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                co=1;
                break;
            }
        }
        if(co==1){
            co=0;
            continue;
        }
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
