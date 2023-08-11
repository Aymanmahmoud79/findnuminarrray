#include <stdio.h>
 int main()
 {
	 
	 int Arr[10]={7,9,11,15,23,35,40,43,70,90};
	 int start = 0, end = 9, middle,i=0, search=0, index;
	 
	 while(start <= end){
		 middle= (start+end)/2;
		 if(search == Arr[middle]){
		 index = middle;
		 break;
	 }
	 else if(search >  Arr[middle]){
		 start= middle+1;
		 
	 }
	 else {
		 end= middle-1;
	 }
	 
	 if(start > end){
		 
		 printf("number not found");
		 
	 }
	 else{
		 printf("the number is found and it's  index is  %d",index);
		
	 }
	
	}	 
	 
 }