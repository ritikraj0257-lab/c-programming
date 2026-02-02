#include<stdio.h>
    int main(){
    int students , subjects;
    printf("enter no of students");
    scanf("%d",&students);
    printf("enter no of subjects");
    scanf("%d",&subjects);
    int marks[students][subjects];
    
    for(int i=0 ;i<students; i++){
        printf("enter marks of students %d\n",i+1);
        for(int j=0; j<subjects; j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0; i<students; i++){
        int total=0;
        for(int j=0; j<subjects; j++){
            total+=marks[i][j];
        }
        printf("total marks of students %d= %d\n",i+1,total);
    }
    return 0;
}
