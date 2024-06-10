#include<iostream>
using namespace std;
int main(){
    int n,m,x,sum,percent;
    cout<<"Enter marks for subject 1: ";
    cin>>n;
    cout<<"Enter marks for subject 2: ";
    cin>>m;
    cout<<"Enter marks for subject 3: ";
    cin>>x;
    sum=n+m+x;
    cout<<"Total marks: "<<sum<<endl;
    percent=sum/3;
    cout<<"percentage obtained : "<<percent<<endl;
    if(percent>=90){
        cout<<"grade = A";
    }
    else if(percent>=80&&percent<=90){
        cout<<"grade = B";
    }
    else if(percent>=70&&percent<=80){
        cout<<"grade = C";
    }
    else if(percent>=60&&percent<=70){
        cout<<"grade = D";
    }
    else if(percent>=50&&percent<=60){
        cout<<"grade = E";
    }
    else{
        cout<<"fail";
    }
    return 0;

}