#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void BubbleSort(char string[][MAX_SIZE], int n) {
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n -i -1; j ++) {
            if (strcmp(string[j],string[j+1])>0) {
                char temp[MAX_SIZE];
                strcpy(temp,string[j]);
                strcpy(string[j],string[j+1]);
                strcpy(string[j+1],temp);
            }
        }
    }

}

int main () {
    int n;
    int i;
    printf("Enter the number of strings : \n");
    scanf("%d",&n);

    char string[n][MAX_SIZE];

    if (n > MAX_SIZE) {
        printf("Number of strings exceeds maximum allowed size.\n");
        return 1; 
    }
    for (i=0; i < n; i++){
        printf("Input string %d : ",i + 1);
        scanf("%s",string[i]);
    }

    BubbleSort(string, n);
    printf("\nSorted Strings:\n");
    for (i = 0; i < n; i++){
        printf("%s\n",string[i]);
    }

    return 0;
}