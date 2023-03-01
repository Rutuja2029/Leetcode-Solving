#include <iostream>
#include <vector>
using namespace std;


int main() 
{
  int rows, cols;
  cin >> rows >> cols;
  int arr[rows][cols];
  
  for(int i =0; i<rows; i++){
    for(int j =0; j<cols; j++){
      cin >> arr[i][j];
    }
  }
  for(int i =0; i<rows; i++){
    for(int j =0; j<cols; j++){
      cout<< arr[i][j]<<" ";
    }
    cout <<endl;
  }
  //Max & Min
  cout <<"Min & Max from 2D array"<<endl;
  int max = arr[0][0];
  int min = arr[0][0];
  
  for(int i =0; i<rows; i++){
    for(int j =0; j<cols; j++){
      if(arr[i][j] > max)
        max = arr[i][j];
      if(arr[i][j] < min)
        min = arr[i][j];
    }
  }
  
  cout <<"Max : "<<max <<endl;
  cout <<"Min : "<<min <<endl;
  
  
    return 0;
}