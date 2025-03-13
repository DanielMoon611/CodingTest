import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] students = new int[30];
		
		for(int i = 0; i < 28; ++i) {
			int input = sc.nextInt();
			students[input - 1] = input;
		}
		
		for(int j = 0; j < 30; ++j) {
			if(students[j] != j + 1)
				System.out.println(j + 1);
		}
		
	}
}