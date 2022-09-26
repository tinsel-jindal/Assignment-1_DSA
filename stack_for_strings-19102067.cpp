#include <iostream>
#include <stack>
#include<vector>
using namespace std;

void inputString(stack<char> &stk){
    char c;
    stack<char> temp;
    cout<<"Start Entering Characters. Enter '!' To Stop Entering."<<endl;
    while(true){
        cin>>c;
        //stop taing input when "!" is entered
        if(c=='!')break;
        temp.push(c);
    }
    while(!temp.empty()){
        stk.push(temp.top());
        temp.pop();
    }
}

void displayString(stack<char> &stk){
    stack<char> temp;
    while(!stk.empty()){
        temp.push(stk.top());
        cout<<stk.top();
        stk.pop();
    }
    cout<<endl;
    while(!temp.empty()){
        stk.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<char> stk;
    inputString(stk);
    displayString(stk);
}