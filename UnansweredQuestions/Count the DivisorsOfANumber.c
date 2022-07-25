int divisors(int n) {

    int answer = 0;
    int counter = 1;

    for (; counter <= n; counter++) {
        if (n % counter == 0) {
            answer++;
        }
    }
     
    return answer;
    
}