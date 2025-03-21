#include<iostream>
using namespace std;
void rotateimage(int a[100][100],int n,int m){
    //1.reverse the elements of row
    for(int i=0;i<n;i++){
        int x=0;
        int y=n-1;
        while(x<y){
            swap(a[i][x],a[i][y]);
            x++;
            y--;
        }
    }

    //2. transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(a[i][j],a[j][i]);
        }
    }
}
    

int main(){
    int a[100][100];
    int n,m;//n=rows,m=columns
    cin>>n>>m;
    if(n!=m){
        cout<<"Invalid input! Enter a square matrix"<<endl;
        return 0;
    }
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;
        }
    }
    //print input
    cout<<"Original Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //rotate image
    rotateimage(a,n,m);

    // Print rotated matrix
    cout << "Rotated Matrix " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

