import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = 0;
		int b = 0;
		int sum = 0;
		
		while(true) {
			a = sc.nextInt();
			b = sc.nextInt();
			if(a == 0 && b == 0)
				break;
			sum = a + b;
			System.out.println(sum);
		}
	}
}