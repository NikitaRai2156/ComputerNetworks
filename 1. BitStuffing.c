#include<stdio.h>
int main(){
  int a[30], b[30], count, i, j, k, n;
  
  printf("\nEnter frame size: ");
  scanf("%d", &n);
  
  printf("\nEnter frame: ");
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  
  count = 1;
  i = 0;
  j = 0;
  
  while(i<n){
    if(a[i]==1){
      b[j]=a[i];
      for(k=i+1;k<n && a[k]==1 && count<5){
        j++;
        b[j]=a[k];
        count++;
        if(count==5){
          j++;
          b[j]=0;
        }
        i=k;
      }
    }
    else{
      b[j]=a[i];
    }
    i++;
    j++;
  }
  
  printf("\nFrame after stuffing is: ");
  for(i=0;i<n;i++)
    printf("%d", b[i]);
}
