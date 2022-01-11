package geeksforgeeks;

public class ReverseString {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "Geeks";
		String reversed ="";
		for (int i =str.length()-1 ; i>=0 ; i=i-1) {
			char a =str.charAt(i);
			String s=Character.toString(a);
			reversed=reversed+s;
			
		}
		System.out.println(reversed);
	}

}
