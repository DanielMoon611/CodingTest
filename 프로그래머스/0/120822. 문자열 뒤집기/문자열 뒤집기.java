class Solution {
    public String solution(String my_string) {
        String answer = "";
        char[] toArr = new char[my_string.length()];
        char[] reArr = new char[my_string.length()];
        toArr = my_string.toCharArray();
        for(int i = 0; i < toArr.length; ++i) {
            reArr[i] = toArr[toArr.length - 1 - i];
        }
        answer = String.valueOf(reArr);
        return answer;
    }
}