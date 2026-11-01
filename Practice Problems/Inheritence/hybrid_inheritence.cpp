#include <iostream>
using namespace std;

class student {
    protected:
    int roll_no;
    public:
    void get_roll(int a){
        roll_no=a;
    }
    void put_roll(){
        cout<<"\nRoll No: "<<roll_no<<endl;
    }
};
class test: virtual public student{
    protected:
    int marks1, marks2;
    public:
    void get_marks(int x,int y){
        marks1=x;
        marks2=y;
    }
    void put_marks(){
        cout<<"Marks: "<<marks1<<" and "<<marks2<<endl;
    }
};

class sports: virtual public student{
    protected:
    int score;
    public:
    void get_score(int s){
        score=s;
    }
    void put_score(){
        cout<<"Score: "<<score<<endl;
    }
};

class result: public test, public sports{
    int total;
    public:
    void display(){
        total=marks1+marks2+score;
        put_roll();
        put_marks();
        put_score();
        cout<<"Total: "<<total<<endl;
    }
};

int main(){
    result student_result;

    student_result.get_roll(101);
    student_result.get_marks(85, 90);
    student_result.get_score(95);
    student_result.display();

    return 0;
}