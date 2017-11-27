#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main(){
  int c, c1, c2, c3, i, data[10], dataatrec[10];
  
  printf("\nEnter 4 bits of data one by one: ");
  scanf("%d", &data[0]);
  scanf("%d", &data[1]);
  scanf("%d", &data[2]);
  scanf("%d", &data[4]);
  
  data[3] = data[0]^data[1]^data[2];
  data[5] = data[0]^data[1]^data[4];
  data[6] = data[0]^data[2]^data[4];
  
  printf("\nEncoded data: ");
  for(i=0;i<7;i++)
    printf("%d", data[i]);
    
  printf("\nEnter data at receiver: ");
  for(i=0;i<7,i++)
    scanf("%d", &dataatrec[i]);
    
  c1 = dataatrec[6]^dataatrec[0]^dataatrec[2]^dataatrec[4];
  c2 = dataatrec[5]^dataatrec[0]^dataatrec[1]^dataatrec[4];
  c3 = dataatrec[3]^dataatrec[0]^dataatrec[1]^dataatrec[2];
  
  c = c3*4 + c2*2 + c1;
  
  if(c==0){
    printf("\nNo error in transmission.");
  }
  else{
    printf(""\nError at position %d", c);
    
    if(dataatrec[7-c]==0)
      dataatrec[7-c] = 1;
    else
      dataatrec[7-c] = 0;
      
    printf("\nCorrect message is: ");
    for(i=0;i<7;i++)
      printf("%d", dataatrec[i]);
  }
}
