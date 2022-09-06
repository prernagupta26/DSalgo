//deque d-->double ended queue-->insert and delete from both ends

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    
    dq.push_front(3);
    dq.push_front(4);

    for (auto i:dq){
        cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}