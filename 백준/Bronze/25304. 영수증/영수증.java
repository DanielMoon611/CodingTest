import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int X = sc.nextInt();
        int N = sc.nextInt();
        int a = 0;
        int b = 0;
        int i = 1;
        int sum = 0;
        
        while(true) {
            if(i > N)
                break;
            a = sc.nextInt();
            b = sc.nextInt();
            sum += a * b;
            ++i;
        }
        
        if(X == sum)
            System.out.print("Yes");
        else
            System.out.print("No");
    }
}