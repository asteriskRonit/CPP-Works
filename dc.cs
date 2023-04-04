using System;
namespace Array{

	class Myone{

         public static void Main(string[] ags){

         	int[] array=new int[200];
         	int i=0;
         	for(;;)
         	{
         		Console.WriteLine("Enter the Number:");
         		array[i]=Convert.ToInt32(Console.ReadLine());
         		if(array[i]==-2018) break;
         		i++;
         	}
         	Console.WriteLine(array.Length/i);
         }
	}
}