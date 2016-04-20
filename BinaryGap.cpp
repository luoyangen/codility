int solution(int N){
    int tot_zeros = 0;
    int curr_zeros = 0;
    int flag = 0;
    while(N){
        int tmp = N % 2;
        if(tmp == 0){
            if(flag != 0){
                curr_zeros++;
            }
        }else{
            if(flag == 0){
                flag = 1;
            }else{
                tot_zeros = tot_zeros > curr_zeros ? tot_zeros : curr_zeros;
                curr_zeros = 0;
            }
        }
        N = (int)N/2;
    }
    return tot_zeros;
}
