int solution(int A[], int N){
    int unpaired_num = 0;
    for(int i = 0; i < N; i++){
        unpaired_num ^= A[i];
    }
    return unpaired_num;
}
