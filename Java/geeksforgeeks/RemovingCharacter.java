package geeksforgeeks;

public class RemovingCharacter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String string1 = "computer";
		String string2 = "cat";
		String string3="";
		for (int i=0 ; i<string1.length(); i++) {
			char a= string1.charAt(i);
			String s=Character.toString(a);
			if (string2.contains(s)!=true) {
				string3=string3+s;
			}
			
		}
		System.out.println(string3);
	}

}
