#include<stdio.h>
int main(){
    int i,j,pos,n,temp,max;
    int a[100]={11,2,9,8,6,7,1,3};
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        max=a[i];
        pos=i;

    for(j=i+1;j<n;j++){
        if(a[j]>max){
            max=a[j];
            pos=j;
        }
    }
    temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;

    }
    printf("\nSelection sort maximum:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
