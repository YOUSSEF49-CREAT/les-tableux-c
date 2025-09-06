#include <stdio.h>

int main(){
int n ;
printf(entrer nomber des element :);
scanf(%d,&n);
int nom[n];
for(int i=0 ;i<n;i++){
    printf(valeur numbre %d est :,i+1);
    scanf(%d,&nom[i]);
}
for(int i=0 ;i<n;i++){
    printf(valeur numbre %d est : %dn,i+1,nom[i]);
}

return 0;
}
