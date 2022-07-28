package geeksforgeeks;

public class Swapdigits {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String n1="5398";
		String n2="44";
		int n=n2.length();
		String temp=n1;
		n1=n1.replaceFirst(Character.toString(n1.charAt(0)), Character.toString(n2.charAt(n-1)));
		n2=n2.replace(Character.toString(n2.charAt(n-1)), Character.toString(temp.charAt(0)));
		n2.replace(Character)
		

	}

}
