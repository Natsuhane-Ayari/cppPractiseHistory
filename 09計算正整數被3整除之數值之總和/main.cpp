#include <iostream>
using namespace std;
int main(void){
    int d,count=0;
    cin >> d;
    for(int i=1;i<=d;i++){
        if(i%3==0){
            count+=i;
        }
    }
    cout << count << endl;
    return 0;
}

