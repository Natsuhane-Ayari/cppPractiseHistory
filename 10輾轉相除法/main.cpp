#include <iostream>
using namespace std;
int PDZS(int d){ //判斷質數
    if(d==1){    //1=YES, 0=NO
        return 0;
    }
    for(int i=2;i<d;i++){
        if(d%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(void){
    int d1,d2,ctl=2,count=1;
    int ori1,ori2;
    cin >> d1 >> d2;
    ori1=d1;ori2=d2;
    while(PDZS(d1)==0 && PDZS(d2)==0){
        if(d1%ctl!=0 || d2%ctl!=0){
            ctl+=1;
        }
        else{
            d1=d1/ctl;
            d2=d2/ctl;
            count=count*ctl;
        }
        if(ctl>=ori1 && ctl>=ori2){
            cout << count << endl;
            return 0;
        }
    }
    cout << count << endl;
    return 0;
}
