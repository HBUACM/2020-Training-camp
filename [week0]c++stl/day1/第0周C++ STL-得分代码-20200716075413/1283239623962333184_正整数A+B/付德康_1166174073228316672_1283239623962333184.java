import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		/*
		 * pta 7-1-1 输入输出 A+B
		 * Scanner input=new Scanner(System.in);
		int a = input.nextInt();
		int b = input.nextInt();
		int n=0;
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
		int d = Integer.parseInt(second);
		System.out.print(a+b);*/
		
		Scanner input = new Scanner(System.in);
		String a=input.nextLine();
		char b[] = a.toCharArray();
		String c="";
		String d="";
		int n=0;
		int x = 0,y = 0;//x和y分别代表是否是正整数
		int c2=0,d2=0;
		for(int i=0;i<b.length;i++) {
			if(b[i]==' ') {
				n=i;
				break;
			}
		}
		for(int i = 0; i<n; i++)
			c=c+b[i];
		for(int i = n+1; i<b.length; i++)
			d=d+b[i];
		
		char c1[] = c.toCharArray();
		char d1[] = d.toCharArray();
		
		for(int i = 0; i<c1.length ; i++) {
			if(c1[i] < '0' || c1[i] > '9') {
				x=1;
				break;
			}
		}
		for(int i = 0; i<d1.length ; i++) {
			if(d1[i] < '0' || d1[i] > '9') {
				y=1;
				break;
			}
		}
		if(x == 0) {
			c2 = Integer.parseInt(c);
		}
		if(y == 0) {
			d2 = Integer.parseInt(d);
		}
			
		if(x == 1) {
			if(y == 1)
				System.out.println("? + ? = ?");
			else
				System.out.println("? + "+d+" = ?");
		}
		else {
			if(y == 1)
				System.out.println(c+" + ? = ?");
			else
			{
				if(c2>=1&&c2<=1000)
				{
					if(d2>=1&&d2<=1000)
					{
						System.out.println(c+" + "+d+" = "+(c2+d2));
					}
					else
						System.out.println(c+" + ?"+" = ?");
				}
				else {
					if(d2>=1&&d2<=1000)
					{
						System.out.println("? + "+d+" = ?");
					}
					else
						System.out.println("? + ? = ?");
				}
			}
				
		}
		
	}

}
