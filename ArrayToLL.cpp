#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};
Node* convert(vector<int> &arr){
    Node* head= new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;

    }
    return head;

}
int main(){
    vector<int> arr={2,3,45,5};
    Node* head = convert(arr);
    cout<<head->data;

    


}