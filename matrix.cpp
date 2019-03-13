#include <iostream>

using namespace std;

int **M, n;

int **GeraMatriz(int n, int **M){
  M = new int *[n];
  for(int i=0; i<n; i++){
    M[i]= new int [n];
  }
  return M;
}

int **EntraMatriz(int n, int **M){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<"Iforme o valor A"<<i+1<<'x'<<j+1<<": ";
      cin>>M[i][j];
    }
  }
  return M;
}


void MosraMatrizes(int n, int **M){
  cout<<"\n======================================="<<endl;
  cout<<"\nMatriz = "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(j==n-1){
        cout<<M[i][j]<<';'<<endl;
      }
      else{
        cout<<M[i][j]<<", ";
      }
    }
  }
}

void LiberaMatrizes(int n, int **M){
  for(int i = 0; i<n; i++){
    delete M[i];
  }
  delete M;
}

int main() {
  cout<<"Qual o tamanho da Matriz? ";
  cin>>n;
  M = GeraMatriz(n, M);
  M = EntraMatriz(n, M);
  MosraMatrizes(n, M);
  LiberaMatrizes(n, M);
  return 0;
}