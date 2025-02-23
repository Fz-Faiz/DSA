#include<stdio.h>
int stack[100];
int top=-1;


void push(int val){
    if(top == -1){
        top=0;
        
    }
    else{
        top=top+1;
        
        
    }
    stack[top]=val;
    
    
}
int pop(){
    top--;

}
void top2(){
    top--;
    printf("%d\n",stack[top]);
        
    
   

}
void display(){
    for(int i =0;i<5;i++){
        printf("%d\n",stack[i]);

    }
}
int main(){
    
    push(5);
    push(6);
    push(6);
    push(5);
    push(99);
    
    display();
    pop();

}