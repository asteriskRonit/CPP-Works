import java.util.Scanner;
class A
{
    public void Fun(char c)
    {
        System.out.println("hello");
    }
}
class B extends A
{
    public void Fun(int c)
    {
        System.out.println("greetings");
    }
}
public class Main
{
    public static void main(String[] args) {
        int s;
        B d=new B();
        d.Fun(11);
        Scanner sc=new Scanner(System.in);
        s=sc.nextInt();
        System.out.println("The value of s is : "+s);
        for(int i=0;i<5;i++)
        {
            System.out.println("hello world\n");
        }
        try {
            s/=s;
        } catch (Exception e) {
            System.out.println("it should not be 0");
        }

        
        
    }
}