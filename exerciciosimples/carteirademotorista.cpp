#include <iostream>
#include <string>
#include <math.h>

using namespace std;



int main(){

    string t;
    int num;

    cout<<"digite o seu nome \n";
    getline(cin, t);
    cout <<"digite a sua idade \n";
    cin >> num;

    if (num>=18){
        cout<<"sr/sra "<< t <<" esta elegivel para carta"<<endl;
    }else{
        cout<<"não pode tirar";
    }

    return 0;
}