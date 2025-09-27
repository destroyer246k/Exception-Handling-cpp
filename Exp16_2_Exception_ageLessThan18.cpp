#include <iostream>
using namespace std;
int main() {
    string vote;
    int age, BJP = 0;
    int Congress = 0;
    cout << "Enter Age:";
    cin >> age;
    try{
        if(age <18){
            throw age;
        }
        else{
            cout << "You can vote\n "<<endl;
        }
    }
    catch(int age){
        cout << "\nYour age is "<<age<<" cannot vote.";
    }

    cout << "Whom you want to Vote?(BJP/Congress)";
    cin >> vote;
    if(age >=18){
    if(vote == "BJP"){
        BJP++;
        cout << "Thank you for Voting....";
    }
    else if(vote == "Congress"){
        Congress++;
        cout << "Thank you for Voting....";
    }
    else{
        cout << "Enter correctly";
    }
    }
    return 0;
}
/* 
Outputs:

Case 1:
Enter Age: 16
Your age is 16 cannot vote.

Case 2:
Enter Age: 20
You can vote

Whom you want to Vote?(BJP/Congress) BJP
Thank you for Voting....

Case 3:
Enter Age: 25
You can vote

Whom you want to Vote?(BJP/Congress) Congress
Thank you for Voting....

Case 4:
Enter Age: 30
You can vote

Whom you want to Vote?(BJP/Congress) XYZ
Enter correctly
*/
