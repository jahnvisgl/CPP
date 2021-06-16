#include <iostream>
using namespace std;

void Segrigate(int arr[], int n)
{
    int i = 0, j = 0 , k = n-1;
    while (i <= k){
      if(arr[i]==2){
        swap(arr[i],arr[k]);
        k--;
      }
      else if(arr[i]==0){
        swap(arr[i], arr[j]);
        i++;
        j++;
      }
      else if (arr[i] == 1){
        i++;
      }
    }

    cout << "Sorted Array is:" << endl;
    for (int c = 0; c < n; c++)
    {
      cout << arr[c] << ", ";
    }
}

int main()
{
  int n ;
  cout<< "Enter the size of array"<<endl ;
  cin>>n ;

  cout<<"ENTER ARRAY OF 0's AND 1's"<<endl ;
  int arr[n] ;
  
  
  for(int i=0 ; i<n ; i++){
    int a =0 ;
    cin>>a ;

    if(a==0 || a==1 || a==2){
      arr[i] = a ;
    }

    else{
      cout<<"ANY NO. OTHER THAN 0, 2 OR 1 CAN NOT BE INPUT." ;
      return 0;
    }
  }
  Segrigate(arr, n);
  
}