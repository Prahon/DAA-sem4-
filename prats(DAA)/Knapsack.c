#include <stdio.h>
struct Item { int weight, profit; float ratio; };

void sort(struct Item arr[], int n){
	int i,j;
    for( i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(arr[i].ratio < arr[j].ratio){
                struct Item t=arr[i]; arr[i]=arr[j]; arr[j]=t;
            }
}

int main(){
    int n=3, W=50,i;
    struct Item arr[3]={{10,60},{20,100},{30,120}};
    for( i=0;i<n;i++) arr[i].ratio=(float)arr[i].profit/arr[i].weight;
    sort(arr,n);
    float total=0;
    for( i=0;i<n;i++){
        if(W>=arr[i].weight){
            W-=arr[i].weight;
            total+=arr[i].profit;
        } else {
            total+=arr[i].ratio*W;
            break;
        }
    }
    printf("%.2f",total);
}
