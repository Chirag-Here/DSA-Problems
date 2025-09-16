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
Question 2 - Print a Triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;                                                              (if u want to start every line from 1 use j)
        }
        cout<<endl;
    }
    return 0;
}
Question 3 - Print Reverse Triangle 
#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int i=0; i<n; i++){                                         (if u dont use i=0 here its will start your output from 2nd line)
        for(int j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
Ouestion 4- Print Inverted Triangle                                 (Practice this one)
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){                                          
        for(int j=0; j<i; j++){                                           (for space)
            cout<<" ";
        }
    
    for(int j=0; j<n-i; j++){                                             (for number)
        cout<<(i+1);                                (add space here and it will become inverted piramid)
    }
    cout<<endl;
    }
    return 0;
}
*/