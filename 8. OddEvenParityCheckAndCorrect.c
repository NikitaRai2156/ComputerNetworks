#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main(){
  int n[8], p=1, c=0, ans, f=0, i;
  
  printf("\nEnter 7-bit binary number: ");
  for(i=0;i<8;i++){
    scanf("%d", &n[i]);
  }
  
  for(i=p;i<8;i++){
    if(n[i]==1)
      c++;
  }
  
  if(c%2==0){
    f = 1; //even parity
    printf("\nNumber has even parity.");
  }
  else{
    printf("\nNumber has odd parity.");
  }
  
  printf("\nCorrect for: 1. Even Parity\t2. Odd Parity\t3. None");
  scanf("%d", &ans);
  
  if(ans==1){
    p = 0;
    if(f==1)
      n[0] = 0;
    else
      n[0] = 1;
  }
  else if(ans==2){
    p = 0;
    if(f==1)
      n[0] = 1;
    else
      n[0] = 0;
  }
  else{
    p = 1;
  }
  
  printf("\nCorrected number: ");
  for(i=p;i<8;i++){
    printf("%d", n[i]);
  }
}
