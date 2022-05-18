#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int mycompare(string X, string Y){
	string XY =X.append(Y);
	string YX=Y.append(X);
	return XY.compare(YX)> 0? 1:0;
}
void printLargest (vector<string>arr){
	sort(arr.begin(),arr.end(),mycompare);
	for(int i=0; i<arr.size();i++){
	cout<<arr[i];
}
}
int main(){
	vector<string>arr;
	int n;
	cin>>n;
	for(int i=0;i<n; i++){
	cin>>arr[i];
}
	printLargest(arr);
	return 0;

}
