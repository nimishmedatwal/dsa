package objectOrientedd;

class vehicle {
	int wheels;
	String color;
	vehicle(String colour, int wheels){
		color="Red";
		wheels=4;
	}
	vehicle(int noofwheel,String Colour){
		color=Colour;
		wheels=noofwheel;
	}
	void service() {
		System.out.println(wheels+"Vehicle is being serviced");
	}
}

public class Constructers {
	Constructers(){
		System.out.println("Object is now created");
	}
	public static void main(String[] args) {
		vehicle twowheeler= new vehicle(2,"red");
		twowheeler.color="Red";
		vehicle fourwheeler= new vehicle(4,"Black");
		fourwheeler.service();
		Constructers poppy  = new Constructers();
		
		
		
		
		
	}
	
	

}
