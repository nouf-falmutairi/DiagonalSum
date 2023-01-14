#include<iostream>
using namespace std;
void sumleft(int a[][4] , int size){
	int sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (i==j)
			sum+=a[i][j];}}
			cout<<"sum of left diagonal "<<sum<<endl;
}
void sumright(int a[][4] , int size){
		int sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (i+j==3)
			sum+=a[i][j];}}
			cout<<"sum of right diagonal "<<sum<<endl;
}
void lower(int a[][4] , int size){
	cout<<"lower diagonal \n";
		for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (i>j)
		cout<<a[i][j]<<" ";}
		cout<<endl;}}
void upper(int a[][4] , int size){
	cout<<"upper diagonal \n";
		for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (i<j)
			cout<<a[i][j]<<" ";
			else
			cout<<"  ";}
			cout<<endl;
}}
int main(){
	int a[4][4]={{2,3,8,4},{5,1,7,3},{9,2,6,8},{1,4,5,7}};
	int sum=0,size=4;
	for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
		cout<<a[i][j]<<" ";}
		cout<<endl;}
	sumleft(a,size);
	sumright(a,size);
	lower(a,size);
	upper(a,size);
	
	}

