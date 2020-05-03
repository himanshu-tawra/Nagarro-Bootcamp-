#include<iostream>
using namespace std;

bool isSafeToPut(int board[][10],int i,int j,int n){
    // check for the row and col

    for(int k = 0; k < n; k++){
        if(board[i][k] || board[k][j]){
            return false;
        }
    }

    // check for the upper right diagonal
    int row = i;
    int col = j;

    while(j < n && i >= 0){
        if(board[i][j]){
            return false;
        }
        i--;
        j++;
    }
    // check for the upper left diagonal

    i = row;
    j = col;

    while(i >= 0 && j >= 0){
        if(board[i][j]){
            return false;
        }
        i--;
        j--;
    }

    return true;
}

bool NQueen(int board[][10] , int i , int n){
    // base case
    if(i == n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == 1){
                    cout<<" Q ";
                }
                else{
                    cout<<" - ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }




    // recursive case
    for(int j = 0; j < n ; j++){
        if(isSafeToPut(board,i,j,n)){
            board[i][j] = 1;
            if(NQueen(board,i+1,n)){
                return true;
            }
        }

        board[i][j] = 0;
    }
    return false;
}

int main(){
	int board[10][10]={0};

	int n;
	cin>>n;

	NQueen(board,0,n);

	return 0; 
}