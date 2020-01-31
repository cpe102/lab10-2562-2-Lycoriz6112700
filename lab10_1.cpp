#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int rollGrade;
void roll(){
    rollGrade = rand()%9 + 1;
}

int main(){
    srand(time(0));
    string Grade;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    roll();
    if (rollGrade == 1 )Grade = "A" ; 
    else if (rollGrade == 2)Grade = "B+"; 
    else if (rollGrade == 3)Grade = "B" ; 
    else if (rollGrade == 4)Grade = "C+"; 
    else if (rollGrade == 5)Grade = "C" ; 
    else if (rollGrade == 6)Grade = "D+"; 
    else if (rollGrade == 7)Grade = "D" ; 
    else if (rollGrade == 8)Grade = "F" ; 
    else if (rollGrade == 9)Grade = "W" ;

    cout << "You will get "<< Grade <<" in this 261102.";

    return 0;
}

