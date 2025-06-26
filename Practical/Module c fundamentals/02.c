#include <stdio.h>

int main() {
    printf("Enter P(in Rs), R(rate of interest) and T(time period in yrs) respectively\n");  
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T); 
    
    int SI = (P * R * T) / 100;
    int CI = P * ((1 + R/100)^T - 1);
    printf("Simple Interest:%d\n",SI);
    printf("Compound Interest:%d\n",CI);
    return 0;
}