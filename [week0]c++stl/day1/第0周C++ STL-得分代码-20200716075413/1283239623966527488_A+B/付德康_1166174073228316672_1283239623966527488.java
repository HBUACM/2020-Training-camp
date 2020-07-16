
import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int a = input.nextInt();
		int b = input.nextInt();
		/*int n=0;
		for(int i=0;i<b.length;) {
			if(b[i]=='-'||(b[i]>'0'&&b[i]<'9')) {
				n=i;
				i++;
			}
			else
				break;
				
		}
		String first = a.substring(0, n+1);
		String second = a.substring(n+2);
		int c = Integer.parseInt(first);
		int d = Integer.parseInt(second);*/
		System.out.print(a+b);
		
	}

}
