#include<iostream>
using namespace std;
#define endl "\n"

void gameboard(char arr[]){
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[0]<<"  |  "<<arr[1]<<"  |  "<<arr[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[3]<<"  |  "<<arr[4]<<"  |  "<<arr[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[6]<<"  |  "<<arr[7]<<"  |  "<<arr[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;

}
void msgprint(bool win){
    cout<<endl;
    cout<<"\t\t\tCongrats!!!!!!!"<<endl;
    if(win){
        cout<<"\t\tPlayer1 win"<<endl;
    }
    else{
        cout<<"\t\tPlayer2 win"<<endl;
    }
    cout<<"\tParty de bhai jeet gya "<<endl;
}
int main(){
    bool st=1;
        while(st != 0){
        // game partials 
        bool gameresult=false;
        bool plaer1turn=true;
        bool iswin=true;
        char arr[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
        cout<<"\t\tWelcome to the tic toc game "<<endl<<endl;
        cout<<"\tPlayer1 sign is 'X' and Player2 sing is 'O'"<<endl;
        cout<<"\tTo fill any Location enter  the location "<<endl<<endl;
        gameboard(arr); 
        int counter=0;
        while(!gameresult){
            if(plaer1turn){
                cout<<"Player1 turn enter location \n";
            }
            else{
                cout<<"Player2 turn enter location \n";
            }
            int input;cin>>input;
            if(input <1 || input >9){
                cout<<"Unkonwn Location \n";
                continue;
            }
            if(arr[input-1] !=' '){
                cout<<"Already Filled\n";
                cin>>input;
            }
            if(plaer1turn){
                arr[input-1]='X';
            }
            else{
                arr[input-1]='O';
            }
            counter++;
            // game winning logic
            if((arr[0] !=' ' && arr[0]== arr[1] && arr[1] == arr[2]) || (arr[3] !=' ' && arr[3] == arr[4] && arr[4]==arr[5]) || (arr[6] !=' ' && arr[6] == arr[7] && arr[7]==arr[8])){
                gameresult=true;
            }
            else if((arr[0] !=' ' && arr[0]== arr[3] && arr[3] == arr[6]) || (arr[1] !=' ' && arr[1] == arr[4] && arr[4]==arr[7]) || (arr[2] !=' ' && arr[2] == arr[5] && arr[5]==arr[8])){
                gameresult=true;
            }
            else if((arr[0] !=' ' && arr[0]== arr[4] && arr[4] == arr[8]) || (arr[2] !=' ' && arr[2]== arr[4] && arr[4] == arr[6])){
                gameresult=true;
            }
            else if(counter ==9){
                gameresult=true;
                iswin=false;
            }
            gameboard(arr);
            plaer1turn=!plaer1turn;
        }

        if(iswin) msgprint(!plaer1turn);
        else{
            cout<<"Game Draw";
        }
        cout<<"To play again enter 1 and to exit the game 0"<<endl;
        cin>>st;
    }
    return 0 ;
}