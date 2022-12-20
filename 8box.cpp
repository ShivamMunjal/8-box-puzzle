#include <bits/stdc++.h>
using namespace std;
bool validate()
{
	
	int row = 4;
    int col = 3;
    //array for 8 box puzzle
    int ans[row][col];
    //taking input
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            if((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 3 && j == 0) || (i == 3 && j == 2)){
                ans[i][j] = -1;
            }else{
                int temp = 0;
                cout<<"Enter value at Row = "<< i <<" column = "<< j <<endl;
                cin>>temp;
                ans[i][j] = temp;
            }
        }
    }
    //printing filled values
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 3 && j == 0) || (i == 3 && j == 2)){
                cout<<"  ";
            }else cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // validating 
    bool an = true;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 3 && j == 0) || (i == 3 && j == 2)){}
            else{
               if(ans[i-1][j] > 0 && ans[i-1][j] <= 9 ){
                   if(ans[i][j] + 1 == ans[i-1][j]) {an = false; break;}
                   else if(ans[i][j] - 1 == ans[i-1][j]) {an = false; break;}
               }
               
               if(ans[i+1][j] > 0 && ans[i+1][j] <= 9 ){
                   if(ans[i][j] + 1 == ans[i+1][j]) {an = false; break;}
                   else if(ans[i][j] - 1 == ans[i+1][j]) {an = false; break;}
               }
               
               if(ans[i][j+1] > 0 && ans[i][j+1] <= 9 ){
                   if(ans[i][j] + 1 == ans[i][j+1]) {an = false; break;}
                   else if(ans[i][j] - 1 == ans[i][j+1]) {an = false; break;}
               }
               
               if(ans[i][j-1] > 0 && ans[i][j-1] <= 9 ){
                   if(ans[i][j] + 1 == ans[i][j-1]) {an = false; break;}
                   else if(ans[i][j] - 1 == ans[i][j-1]) {an = false; break;}
               }
               
            }
            
        }
        
    }
    return an;
}
int main()
{

	if(!validate())
	{
		cout<<"Wrong Answer";
	}
	else
	cout<<"Right Answer";
    return 0;
}
