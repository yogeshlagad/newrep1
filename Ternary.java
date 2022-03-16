import java.util.Scanner;

public class Ternary {

	public static void main(String[] args) {
		int num;
		String number;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number");
		num = sc.nextInt();
	
		number = num>=0 ? num +  " = is a positive"  : num + " = is a negative";
		System.out.println(number);
	}
}