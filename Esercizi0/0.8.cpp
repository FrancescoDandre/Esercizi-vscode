#include <iostream>
using namespace std;
int main() {
    
int a, b;
    cout<<"inserisci a ";
    cin>>a;
    cout<<"inserisci b ";
    cin>>b;
    
    if (a>=b)
        if (a%b==0)
            cout<<"a multiplo di b";
        else
            cout<<"a non multiplo di b"; 
    else
        cout<<"a non multiplo di b";
return 0;
}
    