package objectOrientedd.packagee;

public class AccessModifiers {
	int age;
	String name;
	public String student(int Age,String Name){
		age=Age;
		name=Name;
		return ("Name is " +name+" and age is "+age) ;
	}
			public static void main(String[] args) {
				AccessModifiers student1= new AccessModifiers();
				
//				student1.student(0, null);
			}
		}

	


