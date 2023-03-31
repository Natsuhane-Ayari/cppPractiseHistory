#include <iostream>
#include <stdlib.h>
using namespace std;
int split(string a,int *RAA,int *ALA){
    //參數:字串,回傳位址,長度位置
    int spacec=1,CS,JD=0,tmpjd=0;
    char tmp[5];
    //CS-->chengshu, JD-->jindu
    for(int i=0;i<a.length();i++){
        if(a[i] == ' '){
            spacec++;
        }
    }
    int arr[spacec];
    for(int i=0;i<a.length();i++){
        switch(a[i]){
            case 'S':
                CS=400;
                break;
            case 'H':
                CS=300;
                break;
            case 'D':
                CS=200;
                break;
            case 'C':
                CS=100;
                break;
            case ' ':
                arr[JD]=atoi(tmp)*CS;
                tmpjd=0;
                JD+=1;
                break;
            default:
                tmp[tmpjd]=a[i];
                break;
        }
    }
    return 0;
}
int main(void){
    string test;
    int AL;
    getline(cin,test);
    int arr[10];
    arr=split(test);
    cout << test << endl;
    for(int i=0;i<3;i++){
        cout << arr[i] << endl;
    }

    return 0;
}
