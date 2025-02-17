import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int H = sc.nextInt();
        int M = sc.nextInt();
        int C = sc.nextInt();
        int result = 0;
        
        if(H == M && M == C)
        	result = 10000 + H * 1000;
        else if(H == M || H == C)
        	result = 1000 + H * 100;
        else if(M == C)
        	result = 1000 + M * 100;
        else
        	result = Math.max(Math.max(H, M), C) * 100;
        
        System.out.println(result);
    }
}