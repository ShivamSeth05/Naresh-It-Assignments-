package test;

import java.io.Serializable;

@SuppressWarnings("serial")
public class EmpBean implements Serializable {//
	private String code,name,dsg;
	private float bsal,tsal;

	public EmpBean() {
	
	}
	public String getCode() {
		return code;
	}
	public void setCode(String code) {
		this.code = code;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getDsg() {
		return dsg;
	}
	public void setDsg(String dsg) {
		this.dsg = dsg;
	}
	public float getBsal() {
		return bsal;
	}
	public void setBsal(float bsal) {
		this.bsal = bsal;
	}
	public float getTsal() {
		return tsal;
	}
	public void setTsal(float tsal) {
		this.tsal = tsal;
	}
	

}
