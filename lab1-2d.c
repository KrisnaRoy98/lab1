#include<stdio.h>
int main(){
    int i,j,pos,n,temp,min;
    int a[100]={11,2,9,8,6,7,1,3};
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=n-1;i>=0;i--){
        min=a[i];
        pos=i;

    for(j=0;j<i;j++){
        if(a[j]<min){
            min=a[j];
            pos=j;
        }
    }
    temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;

    }
    printf("\nSelection sort minimum:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

