#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i<=T; i++){
        int X,Y;
        cin >> X >> Y;

        int low = min(X, Y);
        int high = max(X, Y);
        int sum = 0;
        for(int j = low+1; j <high; j++){
            if(j % 2 != 0){
                sum += j;
            }
        }
        cout << sum << endl;
        
    }
    return 0;
}