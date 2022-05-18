#include<iostream>
#include<string.h>
using namespace std;
string nama;
int nim;
string alamat;
int nilai;
char grade;
char lulus;
void Create(){
    cout<<"Nama lengkap : ";
    cin>>nama;
    cout<<"NIM : ";
    cin>>nim;
    cout<<"Alamat : ";
    cin>>alamat;
    cout<<"nilai : ";
    cin>>nilai;
}
void Stat(){
    Create();
    if((nilai<100)||(nilai<80)){
        
        cout<<'A'<<endl;
        cout<<"lulus"<<endl;
    }
    if((nilai<75)||(nilai<60)){
        
        cout<<'B'<<endl;
        cout<<"lulus"<<endl;
    }
    if((nilai<59)||(nilai<0)){
    
        cout<<'C'<<endl;
        cout<<"tidak lulus"<<endl;
    }
}
string tampilkan(){
cout<<"Nama lengkap : "<<nama<<endl;
cout<<"NIM : "<<nim<<endl;
cout<<"Alamat : "<<alamat<<endl;
cout<<"nilai : "<<nilai<<endl;
return 0;
}
int main(){
Create();
string tampilkan();
return 0;
}