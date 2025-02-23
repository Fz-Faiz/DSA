#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;

    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head =new Node(arr[0]);
    Node* mover=head;
    for(int i = 1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;

    }
    return cnt;
}
int searchInLL(Node* head,int target){
    Node* temp = head;
    while(temp){
        int a = temp->data;
        if(a==target){
            return 1;
        }
        temp = temp->next;
        

    }
    return 0;

}

int main(){
    vector<int> arr={8,3,5,7};
    Node* head=convertArr2LL(arr);
    cout<<head->data;
    cout<<endl;

    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
    cout<<lengthOfLL(head);
    cout<<endl;
    cout<<searchInLL(head,5);
}