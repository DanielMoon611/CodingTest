import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();
        int i = 1;
        
        while(true) {
            if(i > T)
                break;
            int A = sc.nextInt();
            int B = sc.nextInt();
            System.out.printf("%d\n", A + B);
            ++i;
        }
    }
}