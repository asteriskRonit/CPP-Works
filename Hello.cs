using System;
namespace Project_1{
	class MainClass
	{
		 static int ko=0;
		 static void Methods_input(int[] t,int y){
           
			if(ko!=y)
			{
				Console.WriteLine("Enter the no you want:");
				t[ko]=Convert.ToInt32(Console.ReadLine());
				ko++;
				Methods_input(t,y);
			}

		}
		static void Methods_output(int[] fdi,int m){

			if(ko!=m){
				Console.WriteLine(fdi[ko]+" ");
				ko++;
				Methods_output(fdi,m);
			}
		}
		public static void Main(string[] args){
			int n;
			Console.WriteLine("Enter the no of terms you want:");
            n=Convert.ToInt32(Console.ReadLine());
            int[] num=new int[n];
            Methods_input(num,n);
            Console.WriteLine();
            ko=0;
            Methods_output(num,n);
   		}
	}
}