#include <iostream>
#include <stdio.h>
using namespace std;
int asplitf(string a,int *AP){
    char tmp[10];
    int ctl=-1;
    for(int i=0;i<sizeof(a);i++){
        if(a[i] == ' '){
            ctl+=1;
            tmp[ctl]='\0';
            ctl=-1;
            *AP=atoi(tmp);
            //AP=10;
            AP+=1;
        }
        else{
            ctl+=1;
            tmp[ctl]=a[i];
        }
    }
    *AP=atoi(tmp);
    return 0;
}
int main(void){
    int a[3];
    string in;
    in="12 34 56";
    asplitf(in,&a[0]);
    for(int i=0;i<3;i++){
        cout << a[i] << endl;
    }
    return 0;
}
