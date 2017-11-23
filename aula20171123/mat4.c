Multiplica_matrizes(Matriz mat1,Matriz mat2,Matriz mat3)
{
	Matriz mat1, mat2,mat3;
	int lin,col,i,acumula;
	if (mat1.col == mat2.lin)
	{
		for (int k=1; k <= mat1.lin; k++)
		{
			for (int l=1; l<=mat2.col; l++)
			{
				acumula=0;
				for ( int i=1; i<= mat1.col; i++)
					acumula = acumula + mat1[k][i]*mat2[i][l];]
			}
		}		
	}
	imprimirMatriz(mat3);
}
