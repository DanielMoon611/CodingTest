import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt();
        
        N /= 4;
        
        for(int i = 0; i < N; ++i)
            System.out.print("long ");
        System.out.print("int");
    }
}