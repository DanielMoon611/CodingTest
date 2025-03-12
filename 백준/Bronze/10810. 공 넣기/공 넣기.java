import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int[] arr = new int[n];
		int m = sc.nextInt();
		int i, j, k = 0;
		int index = 0;
		while(true) {
			if(index >= m)
				break;
			i = sc.nextInt();
			j = sc.nextInt();
			k = sc.nextInt();
			for(int x = i - 1; x < j; ++x) {
				arr[x] = k;
			}
			index++;
		}
		
		for(int a : arr)
			System.out.printf("%d ", a);
	}
}