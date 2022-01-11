package geeksforgeeks;

public class TwiceCounter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] list = {"Tom", "Jerry", "Thomas", "Tom", "Jerry", "Courage", "Tom", "Courage"};
		int[] n =new int[9];
		int count=0 ; 
		for (int i = 0 ; i<list.length ; i++) {
			for(int j=0; i<list.length;j++ ) {
				if (list[i]==list[j]) {
					count =count+1;
					
					
				}
				n[i]=count;
			}
		}
		for (int i=0 ; i<8; i++) {
			System.out.println(n[i]);
		}
	}

}
