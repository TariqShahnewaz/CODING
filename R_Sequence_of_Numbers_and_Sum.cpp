#include<iostream>
using namespace std;
int main() {
    int N, M;
    while(cin >> N >> M) {
        if (N < 1 || M < 1) {
            if( N <= 0 || M <= 0) {
               break;
            }
           
        }
        int sum = 0;
        if (M > N){
            for(int i = N; i <= M; i++){
                sum += i;
                cout<<i << " ";
            }
        }else{
            for(int i = M; i <= N; i++){
                sum += i;
                cout<<i << " ";
            }

        }
        cout << "sum =" << sum << endl;
}
return 0;
}