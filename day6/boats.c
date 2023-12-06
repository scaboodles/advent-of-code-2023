#include <stdio.h>

int distance(int time_held_down, int total_time){
    int timeleft = total_time - time_held_down;
    return time_held_down * timeleft;
}

int main(){
    int times[] = {34, 90, 89, 86};
    int records[] = {204, 1713, 1210, 1780};
    long unsigned int marginProd = 1;
    for(unsigned i = 0; i < 4; i++){
        int count = 0;
        int better = 0;
        for(int j = 0; j < times[i]; j++){
            if(distance(j, times[i]) > records[i]){
                better = 1;
                count++;
            }else if(better == 1){
                break;
            }
        }

        if(count == 0){
            printf("count 0\n");
        }

        marginProd *= count;
    }
    printf("ret: %ld\n", marginProd);
    return 0;
}
