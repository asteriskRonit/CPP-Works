class D
{
	static void abc()
	{
		System.out.println("hello in D");
	}
}
class E extends D
{
	static void abc(int a)
	{
		System.out.println("hello in e");
	}
}
public class AS
{
	public static void main(String[] args) {
		
		E.abc();
	}
}