double arithmetic(double a, double b, const char* operator) {

    double answer;
  
    while (operator == "add") {
        answer = a + b;
        return answer;
    }

     while (operator == "subtract") {
        answer = a - b;
        return answer;
    }

     while (operator == "multiply") {
        answer = a * b;
        return answer;
    }

     while (operator == "divide") {
        answer = a / b;
        return answer;
    }
  
}