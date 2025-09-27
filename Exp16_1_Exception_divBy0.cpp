//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main() {
    float n1,n2,ans;
    cout << "Enter Number 1:";
    cin >> n1;
    cout << "Enter Number 2:";
    cin >> n2;
    try{
        if(n2 == 0){
            throw n2;
        }
        else{
            ans = n1/n2;
            cout << "Answer is: "<<ans<<endl;
        }
    }
    catch(float num){
        cout << "\nCannot Divide by 0";
    }

    return 0;
}
/* 
Outputs:

Case 1:
Enter Number 1: 10
Enter Number 2: 2
Answer is: 5

Case 2:
Enter Number 1: 7
Enter Number 2: 0
Cannot Divide by 0

Case 3:
Enter Number 1: -12
Enter Number 2: 4
Answer is: -3
*/
