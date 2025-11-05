

class Program{
	static void Main(){
            Console.WriteLine("== C# Type Binding Tour ==\n");

            // A) Static typing vs. 'var' (compile-time binding)
            int n = 42;                 // static: type known at compile time
            var message = "Hello";      // 'var' is still statically typed as string
            Console.WriteLine($"A) n: {n} (int), message: {message} (string via var)");

            // B) Implicit & explicit numeric conversions (compile-time checked)
            double dImplicit = n;       // implicit int -> double
            int nExplicit = (int)3.9;   // explicit double -> int (truncates)
            Console.WriteLine($"B) implicit int->double: {dImplicit}, explicit double->int: {nExplicit}");


	}
}


