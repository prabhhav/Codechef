using System;   
namespace CodeChef
{
    class FLOW005
    {
        static void Main(string[] args)
        {
            int Test = int.Parse(Console.ReadLine());
            int money;
            int[] currency = new int[] { 100, 50, 10, 5, 2, 1 };
            while (Test-- > 0)
            {
                money = int.Parse(Console.ReadLine());
                int rem = money, count = 0;
                foreach (int item in currency)
                {
                    count += rem / item;
                    rem = rem % item;
                    if (rem == 0)   break;
                }
                Console.WriteLine(count);
            }
        }
    }
}
