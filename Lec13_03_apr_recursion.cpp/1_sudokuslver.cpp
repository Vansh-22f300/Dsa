#include <bits/stdc++.h>
using namespace std;

bool kyasafehai(int board[9][9],int i,int j,int no,int n){
    //1.row//2.col//3.pura block krna hai check

    for(int k=0;k<n;k++){
        //row and col check
        if(board[i][k]==no || board[k][j]==no){
            return false;
        }

    }

    //blck check krna hai
    n=sqrt(n); //3*3 block hai
    int si=(i/n)*n; //0,3,6
    int sj=(j/n)*n; //0,3,6

    for(int i=si;i<si+n;i++){
        for(int j=sj;j<sj+n;j++){
            if(board[i][j]==no){
                return false;
            }
        }
    }
    return true;
}
bool sudokuSolver(int board[9][9], int i, int j,int n) {
    //base case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return true; //sudoku solved
    }


    //recursive case

    //1. puri rOW me elements fill kr diye
    if(j==n){
        //ab next row pr jao
        return sudokuSolver(board,i+1,0,n);
    }

    //2.checking if i am already presenst on filled cell
    if(board[i][j]!=0){
        //fixed hai cell
        //ab next cell pr jao
         return sudokuSolver(board,i,j+1,n);
    }
    
    //3. empty cell pr hu
    for(int no=1;no<=n;no++){
        if (kyasafehai(board,i,j,no,n)){
            board[i][j] = no;
            bool kyabaatbani=sudokuSolver(board,i,j+1,n);
            if(kyabaatbani) return true;

            board[i][j]=0; //backtrack

        }

    }
    
    
    return false;

    
}

int main(){
    int board[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

    sudokuSolver(board, 0, 0,9);
    return 0;
}