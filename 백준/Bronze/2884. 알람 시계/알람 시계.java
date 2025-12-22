import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int H = sc.nextInt();
        int M = sc.nextInt();
        
        if(M >= 45)
            M -= 45;
        else {
            if(H == 0)
                H = H - 1 + 24;
            else
                H -= 1;
            M = M - 45 + 60;
        }
        System.out.printf("%d %d\n", H, M);
    }
}