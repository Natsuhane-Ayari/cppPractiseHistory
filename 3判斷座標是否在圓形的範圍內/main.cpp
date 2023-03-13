#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int x,y;
    cin >> x >> y;
    if(pow((pow(x,2) + pow(y,2)),0.5) <= 100){
        cout << "inside" << endl;
    }
    else{
        cout << "outside" << endl;
    }
    return 0;
}

