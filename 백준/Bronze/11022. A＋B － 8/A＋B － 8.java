import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int tc = sc.nextInt();
		int a = 0;
		int b = 0;
		int i = 1;
		
		while(true) {
			if(i > tc)
				break;
			a = sc.nextInt();
			b = sc.nextInt();
			System.out.printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
			++i;
		}
	}
}