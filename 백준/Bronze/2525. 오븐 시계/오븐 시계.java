import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int H = sc.nextInt();
        int M = sc.nextInt();
        int C = sc.nextInt();
        
        M += C;
        
        if(M >= 60) {
        	H += M / 60;
        	if(H >= 24)
        		H -= 24;
        	M = M % 60;
        }
        
        System.out.printf("%d %d\n", H, M);
    }
}