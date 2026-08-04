#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));

    int measurement_count;

    printf("How many measurement would you like to do?: ");
    scanf("%d", &measurement_count);

    float *measurement_degree = calloc(measurement_count, sizeof(float));

    if(measurement_degree == NULL){
        printf("Memory couldn't be allocated!");
        return 1;
    }

    for(int i = 0; i < measurement_count; i++){
        int random_num = (rand() % 100) + 1;
        measurement_degree[i] = random_num;
    }

    for(int k = 0; k < measurement_count; k++){
        printf("Measured degree: %.2f\n", measurement_degree[k]);
    }

    free(measurement_degree);
    measurement_degree = NULL;

    Sleep(3000);
    return 0;
}