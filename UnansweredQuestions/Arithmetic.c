// Given two numbers and an arithmetic operator (the name of it, as a string), return the result of the two numbers having that operator used on them.

// a and b will both be positive integers, and a will always be the first number in the operation, and b always the second.

// The four operators are "add", "subtract", "divide", "multiply".

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

// Quicker and smarter solution.

double arithmetic(double a, double b, char* operator) {
  switch(operator[0]){
      case 'a':
         return a+b;
      case 's':
         return a-b;
      case 'm':
          return a*b;
      case 'd':
          return a/b; 
}
}