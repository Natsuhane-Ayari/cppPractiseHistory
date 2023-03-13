#include <iostream>
using namespace std;
int main(void){
    int d;
    cin >> d;
    if(d==1){
        cout << "NO" << endl;
        return 0;
    }
    for(int i=2;i<d;i++){
        if(d%i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

