#include <iostream>
using namespace std;
int main(void){
    int jijie;
    cin >> jijie;
    if(jijie>=3 && jijie<=5){
        cout << "Spring" << endl;
    }
    else if(jijie>=6 && jijie<=8){
        cout << "Summer" << endl;
    }
    else if(jijie>=9 && jijie<=11){
        cout << "Autumn" << endl;
    }
    else{
        cout << "Winter" << endl;
    }
    return 0;
}
