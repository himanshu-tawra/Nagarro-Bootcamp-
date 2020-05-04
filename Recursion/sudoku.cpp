#include<iostream>
#include<cmath>

using namespace std;


bool isSafe(int mat[][9],int i, int j,int number,int n){
    // check for the row and columne

    for(int k = 0; k < n; k++){
        if(mat[i][k] == number || mat[k][j] == number){
            return false;
        }
    } 

    // check for the small box

    n = sqrt(n);

    int rowStart = (i/n)*n;
    int colStart = (j/n)*n;

    for(int k = rowStart; k < rowStart+n; k++){
        for(int l = colStart; l < colStart+n; l++){
            if(mat[k][l] == number){
                return false;
            }
        }
    }

    return true;

}

bool sudokuSolver(int mat[][9],int i,int j,int n){
    // base case
    if(i == n){
        for(int k = 0; k < n; k++){
            for(int l = 0; l < n; l++){
                cout<<mat[k][l]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    // recursive case
    if(j == n){
        return sudokuSolver(mat,i+1,0,n);
    }

    if(mat[i][j] != 0){
        return sudokuSolver(mat,i,j+1,n);
    }

    
    for(int number = 1; number <= 9; number++){
        if(isSafe(mat,i,j,number,n)){
            mat[i][j] = number;
            bool isSolved = sudokuSolver(mat,i,j+1,n);
            if(isSolved){
                return true;
            }
            mat[i][j] = 0;
        }

    }
    return false;
}

int main(){

    int mat[9][9] =
	{
	{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}
	};

    sudokuSolver(mat,0,0,9);

    return 0;
}