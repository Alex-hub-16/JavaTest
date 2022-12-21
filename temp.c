#include<stdio.h>
#include<math.h>


double minarray(double a[], int size){
    double min = a[0];
    for(int i = 0; i<size; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}
double maxarray(double a[], int size){
    double max = a[0];
    for(int i = 0; i<size; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}
double meanarray(double a[], int size){
    double mean = 0;
    for(int i = 0; i<size; i++){
        mean = mean + a[i];
    }
    mean = mean/size;
    return mean;
}

double arr[4] = {1,2,3,4};

int main(){
    
    int amount[13] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* month[] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int size = 366;
    double temp[366];

    printf("étape 1");
    
    for(int i = 0; i<366; i++){
        scanf("%lf", &temp[i]);
    }
    int ouensuije = 0;
    
    printf("\nétape 2");

    for(int i = 0; i<12; i++){
        double m[amount[i]];
        printf("\nétape 3");
        for(int j = ouensuije; j < ouensuije + amount[i] ; j++){
            for(int k = 0; k < amount[i]; k++){
                m[k] = temp[j]; 
                //printf("%f\n", m[k]); 
            }
        printf("\nIn blabla the temperatures were like follows :\nmin :%f|          average :%f| max:%f\n", minarray(m, amount[i]), meanarray(m,            amount[i]), maxarray(m, amount[i]));
        }
        ouensuije = ouensuije + amount[i];  
        
    }  
    return 0; 
}