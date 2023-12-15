/*merge sort */
#include<stdio.h>
void main() {
int n,temp,i,j,num[50];
  printf("\n Enter the no of elements");
  scanf("%d",&n);
  printf("Enter %d elements :",n);
  for(i=0;i<n;i++) {
    scanf("%d",&num[i]);
  }
  for(i=0;i<n;i++) {
  if(num[i] > num[i+1]) {
  temp = num[i];
    num[j] = num[i];
    num[i] = temp;
  }
  }
  printf("the sorted array is : ");
  for(i=0;i<n;i++) {
  printf("%d",num[i]);
  }
}












