import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		double[] score = new double[N];
		for(int i = 0; i < score.length; ++i) {
			score[i] = sc.nextDouble();
		}
		Arrays.sort(score);
		double sum = 0;
		for(int j = 0; j < score.length; ++j) {
			sum += ((score[j] / score[score.length-1]) * 100);
		}
		System.out.println(sum / score.length);
	}
}