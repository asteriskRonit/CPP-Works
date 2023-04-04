class F
{
    public void show(int i)
    {
      System.out.println("Integer = "+i);
    }
}
class P extends F
{
    public void show(char v)
    {
        System.out.println("char = "+v);
    }
}
public class De
{
    public static void main(String[] args) {
        
        P f=new P();
        f.show(10);

    }
}