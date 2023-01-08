#include<iostream>
using namespace std;
//Kadane agorithm finds maximum subarray sum in an array.
int maxsubarray(int arr[],int size){
	int maxsum=0,currsum=0;
	int sind=0,lind=0;
	for(int i=0;i<size;i++){
		currsum+=arr[i];
		if(currsum>maxsum){
			maxsum=currsum;
			lind++;
		}
		if(currsum<0){
			currsum=0;
			sind=i+1;
			lind=sind;
		}
	}
	cout<<sind<<"  "<<lind<<endl;
	return maxsum;
}
int main(){
	int a[]={-5,4,6,-3,4,-1};
	cout<<maxsubarray(a,6);
	return 0;
}
