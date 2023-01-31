#include<stdio.h>
int main(){
    int n,k,remain_time, res=0, trace=5;
    scanf("%d %d",&n,&k);
    remain_time = 240 -k;
    //printf("remaining time: %d\n",remain_time);

    while(trace <= remain_time && res <n){
        res++;
        remain_time-=trace;;
        trace+=5;

        //printf("%d\n",trace);

    }
    printf("%d",res);
    /*int n, k, problems_time = 0, max_problems;

    scanf("%d%d", &n, &k);

    for (int i = 1 ) {
        problems_time += 5 * i;
    }

    max_problems = (4*60 - k) / 5;

    if (max_problems > n) {
        max_problems = n;
    }

    printf("%d", max_problems);*/
    return 0;
}
