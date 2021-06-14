#include<iostream>
using namespace std;
// using array and dynamic array

class stackusingarray{
   
    int * data;        
    int nextindex;   // gives next inndex to added element
    int capacity;       // total capacity of a stack
    public:
    // calling a constructor
    stackusingarray(int capacity){
        this->capacity=capacity;
        data=new int[capacity];
        nextindex=0; 
    }

   
   void push(int element){

       // if array is full 
        if(nextindex==capacity){
            int* newdata=new int[2*capacity];    // making a array dynamically
            cout<<"Stack is full "<<endl;
            return ;
        }
        data[nextindex]=element;
        nextindex++;
    }

    // return total size of stack
    int size(){
      return nextindex;
    }
    bool stackempty(){
        if(nextindex==0){
            return 1;
        }
    return 0;
    }

    // remove the top element and return this element
    int pop(){
        if(nextindex==0){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextindex--;
        return data[nextindex];
    }

    void stackfull(){
        if(capacity==nextindex){
            cout<<"Stack is full"<<endl;
        }
    }

};
int main(){
    stackusingarray s(4) ;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    s.stackfull();
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
    cout<<s.stackempty()<<endl;
    return 0;

}