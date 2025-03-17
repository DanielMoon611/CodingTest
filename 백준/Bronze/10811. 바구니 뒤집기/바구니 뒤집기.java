import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int[] arr = new int[N];
		int M = sc.nextInt();
		
		for(int index = 0; index < arr.length; ++index) {
			arr[index] = index + 1;
		}
		
		for(int i = 0; i < M; ++i) {
			int I = sc.nextInt() - 1;
			int J = sc.nextInt() - 1;
			while(I < J) {
				int tmp = arr[I];
				arr[I++] = arr[J];
				arr[J--] = tmp;
			}
		}
		
		for(int a : arr) {
			System.out.print(a + " ");
		}
	}
}