import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int[] array = new int[N];
		int v = 0;
		int count = 0;
		
		for(int i = 0; i < N; ++i) {
			array[i] = sc.nextInt();
		}
		
		v = sc.nextInt();
		for(int j = 0; j < N; ++j) {
			if(array[j] == v) {
				count++;
			}
		}
		
		System.out.println(count);
	}
}