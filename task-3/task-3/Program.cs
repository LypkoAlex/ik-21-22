internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Введiть значення a");
        double? a = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Введiть значення висоти");
        double? h = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine($"S={0.5 * a * h}");
    }
}