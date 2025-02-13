class Solution {
    public int solution(int num1, int num2) {
        int answer = 0;
        int a = num1 / num2;
        int b = ((num1 % num2) * 10) / num2;
        int c = ((((num1 % num2) * 10) % num2) * 10) / num2;
        int d = ((((((num1 % num2) * 10) % num2) * 10) % num2) * 10) / num2;
        answer = a * 1000 + b * 100 + c * 10 + d;
        return answer;
    }
}