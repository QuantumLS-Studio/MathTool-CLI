#include <iostream>
#include <cmath>
#include <limits>
#include <unistd.h>
#include <ctime>
#include <chrono>
using namespace std;
//Easy C++ Head

void error(){
    cout<<"\033[1,31mERROR!\033[0m\a\n";
}

void clear(int i){
    if(i==0)
        system("clear");
    else if(i==1)
        system("CLS");
    else
        error();
}

void print(const char T[],string color,bool i){
    if(i==true){
        if(color=="no")
            cout<<T<<"\n";
        else if(color=="red")
            cout<<"\033[31m"<<T<<"\033[0m\n";
        else if(color=="yellow")
            cout<<"\033[33m"<<T<<"\033[0m\n";
        else if(color=="green")
            cout<<"\033[32m"<<T<<"\033[0m\n";
        else if(color=="teal")
            cout<<"\033[36m"<<T<<"\033[0m\n";
        else if(color=="blue")
            cout<<"\033[34m"<<T<<"\033[0m\n";
        else if(color=="purple")
            cout<<"\033[35m"<<T<<"\033[0m\n";
        else if(color=="white")
            cout<<"\033[0m"<<T<<"\033[0m\n";
        else
            error();
    }
    else if(i==false){
        if(color=="no")
            cout<<T;
        else if(color=="red")
            cout<<"\033[31m"<<T<<"\033[0m";
        else if(color=="yellow")
            cout<<"\033[33m"<<T<<"\033[0m";
        else if(color=="green")
            cout<<"\033[32m"<<T<<"\033[0m";
        else if(color=="teal")
            cout<<"\033[36m"<<T<<"\033[0m";
        else if(color=="blue")
            cout<<"\033[34m"<<T<<"\033[0m";
        else if(color=="purple")
            cout<<"\033[35m"<<T<<"\033[0m";
        else if(color=="white")
            cout<<"\033[0m"<<T<<"\033[0m";
        else
            error();
    }
    else
        error();
}

void line(const char S[],int l,string color){
    if(l<=0)
        error();
    else{
        while(l>1){
            print(S,color,false);
            l--;
        }
        print(S,color,true);
    }
}

void dash(const char T[]){
    cout<<" - "<<T<<endl;
}

void boxout(const char T[],int l){
    if(l<=0){
        error();
    }
    else{
        line("-",l,"white");
        cout<<"| "<<T<<" |"<<endl;
        line("-",l,"white");
    }
}
