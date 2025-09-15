/* Ques 1 - Print a Square
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1; i<=n;i++){                                     (Outer Loop show you lines)
        for(int j = 1; j<=n;j++){                                 (Inner Loop print in lines)
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/