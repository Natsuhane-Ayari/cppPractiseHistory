#include <iostream>
#include <string>
using namespace std;
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
    //int trash;
    int count=1,souD=1;
    string sourcestr;
    string sstr;
    char tmp,last;
    //cin >> trash;
    //cin.ignore();
    getline(cin,sourcestr);
    A2a(&sourcestr);
    sstr=sourcestr;
    for(int i=0;i<sstr.length();i++){
        if(sstr[i]==' '){
            souD+=1;
        }
    }
    for(int i=0;i<sstr.length();i++){
        for(int j=0;j<sstr.length()-1;j++){
            if(sstr[j] > sstr[j+1]){
                tmp = sstr[j];
                sstr[j] = sstr[j+1];
                sstr[j+1] = tmp;
            }
        }
    }
    last=sstr[0];
    cout << souD << endl;
    for(int i=1;i<sstr.length();i++){
        if(sstr[i] != last){

            
            
            if(last != ' '){
                
                cout << last << " : " << count << endl;
                if(i == sstr.length()-1){
                    cout << sstr[i] << " : ";
                }
            }
            last=sstr[i];
            count = 1;
        }
        else{
            count+=1;
        }
    }
    cout << count << endl;
    return 0;
}