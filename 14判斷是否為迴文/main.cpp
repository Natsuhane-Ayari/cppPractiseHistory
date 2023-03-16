#include <iostream>
using namespace std;
int main(void){
    string a;
    cin >> a;
    if(a.length()%2 == 0){
        for(int i=0;i<a.length()/2;i++){
            if(a[i] != a[a.length()-i-1]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    else{
        for(int i=0;i<(a.length()-1)/2;i++){
            if(a[i] != a[a.length()-i-1]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
