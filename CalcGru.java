public class Calc{

	public static void main(String args[])
	{
		int r=0, a, b;
         a=Integer.parseInt(args[0]);// "parseInt" é uma método da classe "Integer" que trata o tipo 'int'
         b=Integer.parseInt(args[2]);
		//SOMA
		if(args[1].equals("+"))// metodo que compara o parametro com conteudo da variavel da classe.
		{
			r=a+b;
			System.out.println( args[0]+args[1]+args[2]+": "+ r);
		}
		//SUBTRAÇÃO
		if(args[1].equals("-"))// metodo que compara o parametro com conteudo da variavel da classe.
		{
			r=a-b;
			System.out.println( args[0]+args[1]+args[2]+": "+ r);
		}
		//MULT --> inserir o * assim: a "*" b // WHY? 
		if(args[1].equals("x") ||args[1].equals("X")) // metodo que compara o parametro com conteudo da variavel da classe.
		{
			r=a*b;
			System.out.println( args[0]+args[1]+args[2]+": "+ r);
		}
		//DIVISÃO
		if(args[1].equals("/"))// metodo que compara o parametro com conteudo da variavel da classe.
		{
			r=a/b;
			System.out.println( args[0]+args[1]+args[2]+": "+ r);
		}
        //POTENCIA
        if(args[1].equals("e")||args[1].equals("E") )// metodo que compara o parametro com conteudo da variavel da classe.
		{
           double c;
            c =  Math.pow(a,b);
			System.out.println( args[0]+args[1]+args[2]+": "+ c);
		}
	}
}