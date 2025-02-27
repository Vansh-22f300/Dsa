#include <iostream>
#include <algorithm>
// #include <functional>     // for greater<int>()
using namespace std;
bool mycomparator(int a,int b){
    return a<b;
}


int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(int);

    // sort(begining_address,ending_address)
    sort(arr,arr+n,mycomparator);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-2;i++){

        if(arr[i]>0) 
        break;              // because array is sorted and if 1st element is +ve only and rest will be gretaer than i itself.
                            //No case of  triplet
        if(i>0 and arr[i]==arr[i-1]) continue; //fixed element will not be taken again

        int j=i+1;
        int k=n-1;
        while(j<k){
            if(arr[j]+arr[k]==-arr[i]){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" "<<endl;
                j++;            //Triplet milne ke baad dono ko hatdo
                k--;

                while(j<k and arr[j]==arr[j-1]){  //jo j mila hai agar same mil jayga to ignore karenge
                    j++;
                }
            }
            else if (arr[j]+arr[k]<-arr[i]){  
                j++;
            }
            else k--;
        }
    }

    
return 0;
}