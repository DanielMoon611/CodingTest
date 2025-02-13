class Solution {
    public int solution(int slice, int n) {
        int answer = 0;
        if(slice >= n)
            answer = 1;
        else {
            answer = n / slice;
            if(n % slice != 0)
                answer += 1;
        }
        return answer;
    }
}