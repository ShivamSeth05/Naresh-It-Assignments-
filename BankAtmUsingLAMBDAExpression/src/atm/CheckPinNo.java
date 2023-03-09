package atm;

public class CheckPinNo {
	int pin;
	public CheckPinNo(int pin) {
		this.pin=pin;
	}
	public boolean verify() {
		if(pin==1111 || pin==2222 || pin==3333)
			return true;
		return false;

	}

}
