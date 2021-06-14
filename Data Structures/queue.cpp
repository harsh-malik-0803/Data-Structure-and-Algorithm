#include <iostream>
#include<vector>
using namespace std;
class queue {
    private:
        //vector to store elements
        vector<int> data;       
        // a pointer to indicate the start position
        int p_start;            
    public:
        queue() {p_start = 0;}
        /* Insert an element into the queue */
        void insertqueue(int x) {
            data.push_back(x);
        }
        // Delete an element from the queue.
        void deletequeue() {
            if (isEmpty()) {
                cout<<"Queue is empty "<<endl;
                return ;
            }
            p_start++;
        };

        // Gives the remaining item from the queue
        void display() {
            int temp=p_start;
            while(temp!= data.size()){
                cout<<data[temp++]<<" "; 
            }
            cout<<endl;
        };
        // Checks whether the queue is empty or not
        bool isEmpty()  {
            return p_start >= data.size();
        }
};

int main() {
    queue q;
    q.insertqueue(5);
    q.insertqueue(3);
    q.insertqueue(8);
    q.insertqueue(1);
    q.display();          
    
    q.deletequeue();
    q.deletequeue();
    q.display();
}