#include <stdio.h>

int main(){
    int n ;
printf(entrer nomber des element de tableux :);
scanf(%d,&n);
int nomber[n];
for(int i = 0 ; i < n ; i++){
  printf(entrer les element de tableux %d :,i+1);
  scanf(%d,&nomber[i]);
}
int sum = 0 ;
for(int i = 0 ; i < n ; i++){
 sum = sum + nomber[i];
}
printf( la somme est : %d ,sum);

return 0;
}
