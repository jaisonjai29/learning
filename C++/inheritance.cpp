#include <iostream>
#include <string>
using namespace std;

class Father{
public:
    int age;
    string name;
    Father(){
        //cout<<"Father constructor"<<endl;
    }
    void set_data(int age,string name){
        this->age = age;
        this->name = name;      
    }
    void get_data(){
        cout<<"Father "<<age<<" "<<name<<endl;
    }    
};
class Mother{
public:
    int age;
    string name;
    Mother(){
        //cout<<"Mother constructor"<<endl;
    }
    void set_data(int age,string name){
        this->age = age;
        this->name = name;      
    }
    void get_data(){
        cout<<"Mother "<<age<<" "<<name<<endl;
    }
};
class Child : public Father,public Mother{
public:
    int age;
    string name;
    Child(){
        cout<<"Child constructor"<<endl;
    }
    void set_data(int age,string name){
        this->age = age;
        this->name = name;      
    }
    void get_data(){
        cout<<"Child "<<age<<" "<<name<<endl;
        Father::set_data(100,"Jai");
        Mother::set_data(101,"ANI");
        Father::get_data();
        Mother::get_data();
    }
};

int main() {
    Father F;
    F.set_data(30,"Jaison");
    F.get_data();
    Mother M;
    M.set_data(27,"Ani");
    M.get_data();
    Child C;
    C.set_data(1,"Don");
    C.get_data();
    return 0;
}
