#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    // srand(static_cast<unsigned int>(time(0)));
    srand(time(0));
    int number=rand()%100+1;
    // cout<<number<<endl;
int guess;
for(int i=1;i<=10;i++){
    cout<<"Enter a number between 1 to 100: "<<endl;
    cin>>guess;
    if(guess<number){
        cout<<"Too low! Try again. "<<endl;
    }
    else if(guess>number){
        cout<<"Too High! Try again. "<<endl;


    }
    else{
        cout<<"Congratulations!you guessed the number";
        break;
    }
}

}
