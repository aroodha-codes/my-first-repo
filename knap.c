#include<stdio.h>
#include<stdlib.h>
#define MAX_ITEMS 50
typedef struct{
    int weight;
    int profit;
    float ratio;
} item;
void swap(item *a,item *b){
    item temp = *a;
    *a = *b;
    *b = temp;
}
int discrete(int n,int capacity,item items[]){
    int totalProfit = 0;
    for(int i=0;i<n;i++){
    if(capacity<=0) break;
    if(items[i].weight<=capacity){
        totalProfit += items[i].profit;
        capacity -= items[i].weight;
    }
    }
    return totalProfit;
}
float continous(int n,int capacity,item items[]){
    float totalProfit = 0.0;
    for(int i=0;i<n;i++){
        if(capacity<=0) break;
        if(items[i].weight<=capacity){
            totalProfit += items[i].profit;
            capacity -= items[i].weight;
        }else{
            totalProfit += items[i].ratio*capacity;
            capacity=0;
        }
    }
    return totalProfit;
}
int main(){
    int n,capacity;
    printf("Enter the number of items:\n");
    scanf("%d",&n);
    printf("Enter the capacity of knapsack:\n");
    scanf("%d",&capacity);
    item items[MAX_ITEMS];
    printf("Enter the weight and profit of knapsack:\n");
    for(int i=0;i<n;i++){
        scanf("%d%d",&items[i].weight,&items[i].profit);
        items[i].ratio = (float)items[i].profit/items[i].weight;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(items[j].ratio < items[j+1].ratio){
                swap(&items[j],&items[j+1]);
            }
        }
    }
int dicreteprofit = discrete(n,capacity,items);
printf("The discrete maximum profit is:%d\n",dicreteprofit);
float continousprofit = continous(n,capacity,items);
printf("The continous maximum profit is:%.2f\n",continousprofit);
}