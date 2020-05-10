#include <bits/stdc++.h>
using namespace std;

int outofMatrix(int row,int column,int m,int n){
	//all cases for index to be out of matrix
	if(row<0)
		return 1;

	if(column<0)
		return 1;

	if(column>=n)
		return 1;

	if(row>=m)
		return 1;

	//else
	return 0;
}

void exitInMatrix(int** a,int m,int n){
	int row_direction[4]={0,1,0,-1};
	int column_direction[4]={1,0,-1,0};

	int counter=0;//starting moving direction index
	//starting index && next index for if starting value 0
	int next_column=1,next_row=0,current_column=0,current_row=0;
	if(a[0][0]==1){//when starting element ==1, direction becomes downwards
		next_column=0;
		next_row=1;
		counter=1; //to indicate downward movement
	}

	while(!outofMatrix(next_row,next_column,m,n)){//until we haven't exited
		//update current_column, current_row
		current_column=next_column;
		current_row=next_row;
		if(a[current_row][current_column]==1){//if current element 1
			a[current_row][current_column]=0;
			counter=(counter+1)%4; //update counter value
			next_column=current_column+column_direction[counter];
			next_row=current_row+row_direction[counter];
		}
		else{//if current element 0
			next_column=current_column+column_direction[counter];
			next_row=current_row+row_direction[counter];
		}
	}
	printf("%d %d\n",current_row,current_column);//print exit index
}

int main(){
	int n,m;
	
	scanf("%d %d",&m,&n);
	int **a=(int**)malloc(sizeof(int*)*m);
	for(int i=0;i<m;i++)
		a[i]=(int*)malloc(sizeof(int)*n);
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}

	exitInMatrix(a,m,n);

	return 0;
}
