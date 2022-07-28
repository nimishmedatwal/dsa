package geeksforgeeks;

public class ClosingbracketIndex {
	public static void main(String[] args) {
		String S = "[AB[C[23]]][89]";
		int pos = 0;
		int counter=0;
		for (int i=pos; i<S.length() ; i++) {
			if (S.charAt(i)=='[') {
				counter=counter+1;
				
			}
			if (S.charAt(i)==']') {
				counter=counter-1;
			}
			if (counter==0) {
				System.out.println(i);
				break;
			}
		}
		String d=new String();
	

}
}