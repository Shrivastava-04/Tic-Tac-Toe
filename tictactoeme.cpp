#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> input(3, vector<char>(3));
int winner=-1;
void display(){
    system("cls");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(!input[i][j]){
                cout<<"  ";
            }
            else{
                cout<<input[i][j]<<" ";
            }
            if(j!=2){
                cout<<"|";
            }
        }
        cout<<endl;
        if(i==2){
            continue;
        }
        cout<<"--------";
        cout<<endl;
    }
}

void update(int n,bool turn){
    char counter;
    if(turn){
        counter='X';
    }
    else{
        counter='O';
    }
    if(n==1){
        input[2][0]=counter;
    }
    else if(n==2){
        input[2][1]=counter;
    }
    else if(n==3){
        input[2][2]=counter;
    }
    else if(n==4){
        input[1][0]=counter;
    }
    else if(n==5){
        input[1][1]=counter;
    }
    else if(n==6){
        input[1][2]=counter;
    }
    else if(n==7){
        input[0][0]=counter;
    }
    else if(n==8){
        input[0][1]=counter;
    }
    else if(n==9){
        input[0][2]=counter;
    }
    display();
    return;
}

void winnerchecker(){
    if((input[0][0]==input[1][1]&&input[1][1]==input[2][2])&&((input[0][0]=='X')||(input[0][0]=='O')) ){
        int win;
        if(input[0][0]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[0][2]==input[1][1]&&input[1][1]==input[2][0])&&((input[0][2]=='X')||(input[0][2]=='O')) ){
        int win;
        if(input[0][2]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[0][0]==input[1][1]&&input[1][1]==input[2][2])&&((input[0][0]=='X')||(input[0][0]=='O')) ){
        int win;
        if(input[0][0]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
    }
    if((input[0][0]==input[0][1]&&input[0][1]==input[0][2])&&((input[0][0]=='X')||(input[0][0]=='O')) ){
        int win;
        if(input[0][0]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[1][0]==input[1][1]&&input[1][1]==input[1][2])&&((input[1][0]=='X')||(input[1][0]=='O')) ){
        int win;
        if(input[1][0]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[2][0]==input[2][1]&&input[2][1]==input[2][2])&&((input[2][0]=='X')||(input[2][0]=='O')) ){
        int win;
        if(input[2][0]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[0][0]==input[1][0]&&input[1][0]==input[2][0])&&((input[0][0]=='X')||(input[0][0]=='O')) ){
        int win;
        if(input[0][0]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[0][1]==input[1][1]&&input[1][1]==input[2][1])&&((input[0][1]=='X')||(input[0][1]=='O')) ){
        int win;
        if(input[0][1]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }
    if((input[0][2]==input[1][2]&&input[1][2]==input[2][2])&&((input[0][2]=='X')||(input[0][2]=='O')) ){
        int win;
        if(input[0][2]=='X'){
            win=1;
            winner=1;
        }
        else{
            win=2;
            winner=0;
        }
        cout<<"player "<<win<<" Wins";
        return;
    }

}

int main(){
    display();
    int t=9;
    bool turn=true;
    while(t--){
        if(turn){
            cout<<"player 1-";
            int n;
            cin>>n;
            update(n,turn);
            turn=false;
        }
        else{
            cout<<"player 2-";
            int n;
            cin>>n;
            update(n,turn);
            turn=true;
        }
        winnerchecker();
        if(winner!=-1){
            break;
        }
    }
    if(winner==-1){
        cout<<"DRAW";
    }
}
