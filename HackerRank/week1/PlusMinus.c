#include <stdio.h>

void printRatios(int data[] ,int size) {
    int pos =0, neg =0, zeros =0;
    
    for (int i=0; i<size; i++){
        if(data[i]>0) 
          pos++;
        else if (data[i]<0)
           neg++;
        else
           zeros++;
    }
    
    float total = (float)size;
    
    printf("%.6f\n", pos / total);
    printf("%.6f\n", neg / total);
    printf("%.6f\n", zeros / total);
    
}

int main(){
    int count;
    scanf("%d", &count);
    int values[count];
    
    for(int i=0; i<count; i++){
        scanf("%d", &values[i]);
    }
    
    printRatios(values,count);
    return 0;
}