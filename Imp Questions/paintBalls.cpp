#include <iostream>
using namespace std;

void identifyTheColorSheets(int N, int M, int paintingSheet[][4], int shotCoordinated[][3]){
	for(int i=0; i<N; i++){
		int count=0;
		for(int j=0; j<M; j++){
			if(paintingSheet[i][0] < shotCoordinated[j][0] &&
			paintingSheet[i][2] > shotCoordinated[j][0] &&
			paintingSheet[i][1] < shotCoordinated[j][1] &&
			paintingSheet[i][3] > shotCoordinated[j][1] ){  
                count++;
            }
        }
        cout<<count<<endl;  
    } 
}



int main(){
    int n, m;
    cin >> n , m;
    int arr[3][4];
    for(int i=0; i<n ; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }  
    }
    int arr2[3][3];
    for(int i=0; i<3 ; i++){
        for(int j = 0; j<3; j++){
            cin >> arr2[i][j];
        }  
    }
    identifyTheColorSheets(n, m, arr, arr2);
    
    return 0; 
}

