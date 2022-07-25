int divisors(int n) {

    int answer;
    int counter = 1;

    for (counter; counter <= n; counter++) {
            if (n % counter == 0) {
        answer++;
        }
    }
     
    return answer;

}