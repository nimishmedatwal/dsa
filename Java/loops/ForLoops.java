package loops;

public class ForLoops {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		for (int x=1 ; x<=5 ; x+=1) {
//			System.out.println("hello world");
//		}
		
		int sum = 1;
		int ans=0;
		for (int x=1 ; x<=100 ; x+=1) {
			ans=ans+sum;
			sum +=1;
			
		}
		System.out.println(ans);
	}

}
