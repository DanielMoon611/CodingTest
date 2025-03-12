import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int M = sc.nextInt();
		
		int[] arr = new int[N];
		
		for(int i = 0; i < arr.length; ++i) {
			arr[i] = i + 1;
		}
		
		for(int x = 0; x < M; ++x) {
			int I = sc.nextInt();
			int J = sc.nextInt();
			
			int tmp = arr[I-1];
			arr[I-1] = arr[J-1];
			arr[J-1] = tmp;
		}
		
		for(int y = 0; y < arr.length; ++y) {
			System.out.print(arr[y] + " ");
		}
		
	}
}