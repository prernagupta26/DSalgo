#include "bits/stdc++.h"
using namespace std;

class queue1{ //beacuse queue is already included in bits/stdc++
    stack<int> s1;
    stack<int> s2;


    public:
    void push(int x){
        s1.push(x);
    }


    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"queue is empty";
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){  //put all emenets of s1 into s2
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();  //deque element fifo  //1st element in stack s1
        return topval;
    }

    bool empty(){
         if(s1.empty() and s2.empty()){
            cout<<"queue is empty";
            return true;
        }
        return false;
    }
};



int main(){
    queue1 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop();

    return 0;

}