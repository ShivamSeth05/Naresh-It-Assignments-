package jan11_Map;

public class EmpValues {
	public String name,desg;
	public int bSal;
	public float totSal;
	public EmpValues(String name,String desg,int bSal,	float totSal) {
	this.name=name;
	this.desg=desg;
	this.bSal=bSal;
	this.totSal=totSal;
	}
	public String toString() {
	return name+"\t"+desg+"\t"+bSal+"\t"+totSal;
	}

}
