#include<iostream>
using namespace std;

bool ratInMaze(char maze[][5],int sol[][10],int i , int j , int m , int n){

    // base case
    if(i == m-1 && j == n-1){
        sol[i][j] = 1;
        for(int k = 0; k < m; k++){
            for(int l = 0; l < n; l++){
                cout<<sol[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }

    // recursive case

    sol[i][j] = 1;

    // find path rightwards

    if(j+1 < m && maze[i][j+1] != 'X'){
        if(ratInMaze(maze,sol,i,j+1,m,n)){
            return true;
        }
    }

    // find path downwards

    if(i+1 < n && maze[i+1][j] != 'X'){
        if(ratInMaze(maze,sol,i+1,j,m,n)){
            return true;
        }
    }

    sol[i][j] = 0;
    return false;

}

int main(){

    char maze[5][5]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[10][10]={0};

	ratInMaze(maze,sol,0,0,4,4);

    return 0;
}