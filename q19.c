/*#include <stdio.h>
 
int main(){
  int N,l,c;
 
  char forma;


  scanf("%i",&N);
  scanf("%c",&forma);
 
  if(forma =='d'||forma=='D'){
    for(l=0; l<N; l++){
      for(c=0; c<N; c++){
        if(l==c){
          printf("1 ");
        }else{
          printf("0 ");
        }
      }
       printf("\n");
    }
  }
  if(forma=='s'||forma == 'C'){
    for(l=0; l<N; l++){
      for(c=0; c<N; c++){
        if(l<=c){
          printf("1 ");
        }else{
          printf("0 ");
        }
 
      }
       printf("\n");
    }
  }
  if(forma=='i'|| forma=='I'){
    for(l=0; l<N; l++){
      for(c=0; c<N; c++){
        if(l>=c){
          printf("1 ");
        }else{
          printf("0 ");
        }
 
      }
       printf("\n");
    }
  }
  if(forma =='t'|| forma =='T'){
    for(l=0; l<N; l++){
      for(c=0; c<N; c++) {
        if((l+c) % 2 ==0 ){
          printf("1 ");
      }
         else{
          printf("0 ");
        }
 
      }
          printf("\n");
    }
  }
return 0;
}*/