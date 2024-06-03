for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Cells[i][j] == '.')
            {
                if ((M * i + j + 1) % 2 == 1)
                {
                    Cells[i][j] = 'B';
                }
                else
                {
                    Cells[i][j] = 'W';
                }
            }
        }
    }