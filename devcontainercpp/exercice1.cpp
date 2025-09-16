#include <iostream>
using namespace std;

int main() { 

    int val1;
    int val2;
    int val3;

    cout << "Entree utilisateur : " << endl;
    cin >> val1 ;

       cout << "Entree utilisateur : " << endl;
    cin >> val2 ;

       cout << "Entree utilisateur : " << endl;
    cin >> val3;

    if (val1 > val2)
    cout << val1 + "est plus grand que " + val2;
    else if(val2> val3)
    cout << val3 + "est plus grand que " + val2;
    

    return 0;
}