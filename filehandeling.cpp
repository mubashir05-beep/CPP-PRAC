#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter your name and age"<<endl;
    cin.getline(arr,100);
    fstream myfile("xyz.txt",ios::out);//we can add more modes
    // fstream myfile("xyz.txt",ios::out|ios::app);
    
    //myfile.open("xyz.txt");
    myfile<<arr;
    myfile.close();
    cout<<"File Write sucessfull"<<endl;
cout<<"Reading from File "<<endl;
ifstream read ("xyz.txt");
char arr1[100];
read.getline(arr1,100);
cout<<"Array Content is : "<<arr1<<endl;
cout<<"File Read Sucessfull"<<endl;

}