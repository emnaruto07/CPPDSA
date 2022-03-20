#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int i = 1;

    // while(i<n){
        
    //     if(n%i==0){
    //         cout<<"Not prime " << i << endl;
    //     }
    //     else{
    //         cout<<"Prime for " << i << endl;
    //     }
    //     i = i + 1;
    // }

    //  //11111
    // while(i<=n){

    //     int j = 1;
    //     while(j<=n){
    //         cout<< i ;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    // //12345
    // while(i<=n){

    //     int j = 1;
    //     while(j<=n){
    //         cout<< j ;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    // //321
    // while(i<=n){

    //     int j = 1;
    //     while(j<=n){
    //         cout<< n-j+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    //12345,678910
    // int count = 1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count = count+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }
    
    // //printing "*,**"
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // //printing "1,22"
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // //printing "1,23"
    // int count = 1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count;
    //         count = count+1;
    //         j = j+1;
    //     }
    //     cout<<endl; 
    //     i = i+1;
    // }

    // //printing "1,23,345"
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     int val=i;
    //     while(j<=i){
    //         cout<<val;
    //         val = val+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // //printing "1,21,321"
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<(i-j+1);
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch = 'A'+j-1;
    //         cout<<ch;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // char st = 'A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         // char st = 'A';
    //         cout<<st;
    //         st = st+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch='A'+i+j-2;
    //         cout<<ch;
    //         ch=ch+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch=('A'+i-1);
    //         cout<<ch;
    //         ch=ch+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // while(i<=n){
    //     int j=1;
    //     char ch=('A'+n-i);
    //     while (j<=i){
    //         cout<<ch;
    //         ch=ch+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
        
    // }

    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space = space-1;
    //     }

    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // while(i<=n){
    //     int space = i-1;
    //     while(space){
    //         cout<<" ";
    //         space = space-1;
    //     }

    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space = space-1;
    //     }

    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j=j+1;
    //     }

    //     int start=i-1;
    //     while(start){
    //         cout<<start;
    //         start = start-1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space = space-1;        }
    // }

    // // dabaang code
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }

        int space = i-1;
        while(space){
            cout<<"*";
            space = space-1;
        }

        int sp = i-1;
        while(sp){
            cout<<"*";
            sp = sp-1;
        }

        int k=1;
        while(k<=n-i+1){
            cout<<n-i+1;
            k=k+1;
        }
    cout<<endl;
    i=i+1;
    }

    //5
// 1234555555
// 1234**4444
// 123****333
// 12******22
// 1********1
    
}