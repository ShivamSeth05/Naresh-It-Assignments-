package jan20Sorting;

public class Product {
	public String code,name;
	public float price;
	public int qty;
	public Product(String code,String name,float price,int qty)
	{
		this.code=code;
		this.name=name;
		this.price=price;
		this.qty=qty;
	}
	public String toString() {
		return code+"\t"+name+"\t"+price+"\t"+qty; }
}
