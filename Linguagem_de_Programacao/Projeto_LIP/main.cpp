#include <iostream>
#include <stdlib.h>
using namespace std;
struct estrutura
{
    char filme[25]= {0};
    int Mcentro [10][10]= {};
    int MlateralE[4][10]= {};
    int MlateralD[4][10]= {};

};
void menuf ()
{
    system("cls");
    cout << " Seja Bem Vindo a Central de Reserva!\n"
         << " 1- Reservar Assento \n"
         << " 2 - Gerenciar Salas \n\n"
         << " Insira a sua opção: ";
}
void reseta (estrutura sala[], int n)
{
    for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                sala[i].Mcentro [j][k]= 0;
            }
        }
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<10; k++){
                sala[i].MlateralE[j][k]= 0;
                sala[i].MlateralD[j][k]= 0;
            }
        }
    }

}
void imprimir (estrutura sala[],int n)
{
    for(int i=0; i<4; i++)
    {
        if(i==1)
        {
            cout << "   LATERAL DIREITA    ";
        }
        else cout << "                      ";
        for (int j=0; j<10; j++)
        {
            cout << sala[n].MlateralD[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;


    for(int i=0; i<10; i++)
    {
        if(i==4)
        {
            cout << "       CENTRO         ";
        }
        else cout << "                      ";
        for (int j=0; j<10; j++)
        {
            cout << sala[n].Mcentro[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;




    for(int i=0; i<4; i++)
    {
        if(i==1)
        {
            cout << "   LATERAL ESQUERDA   ";
        }
        else cout << "                      ";
        for (int j=0; j<10; j++)
        {
            cout << sala[n].MlateralE[i][j] << " ";

        }
        cout << endl;
    }

}
void imprimir1 (estrutura sala[],int n)
{
    system("cls");
    for(int i=0; i<4; i++)
    {
        if(i==1)
        {
            cout << "   LATERAL DIREITA    ";
        }
        else cout << "                      ";
        for (int j=0; j<10; j++)
        {
            cout << sala[n].MlateralD[i][j] << " ";

        }
        cout << endl;
    }

}
void imprimir2 (estrutura sala[],int n)
{
    system("cls");
    for(int i=0; i<10; i++)
    {
        if(i==4)
        {
            cout << "       CENTRO         ";
        }
        else cout << "                      ";
        for (int j=0; j<10; j++)
        {
            cout << sala[n].Mcentro[i][j] << " ";

        }
        cout << endl;
    }

}
void imprimir3 (estrutura sala[],int n)
{
    system("cls");
    for(int i=0; i<4; i++)
    {
        if(i==1)
        {
            cout << "   LATERAL ESQUERDA   ";
        }
        else cout << "                      ";
        for (int j=0; j<10; j++)
        {
            cout << sala[n].MlateralE[i][j] << " ";

        }
        cout << endl;
    }

}
void filmes (estrutura sala[])
{
    cout << "   Filmes em cartaz: \n\n";
    for (int i=0; i<7; i++)
    {
        cout <<"   ";
        for(int j=0; sala[i].filme[j]!=0; j++)
        {
            cout<< sala[i].filme[j];
        }

        cout << " - Sala " << i+1 << endl;

    }

}
void gerenciar (estrutura sala[], int n)
{
    n=n-1;
    char x;
    int k;
    system("cls");
    cout << "          SALA " << n+1<<endl<<endl
         << " 1- Mudar o nome da sala "<<endl
         << " 2- Resetar os assentos da sala"<<endl<< " ";
    cin >> k;

    switch(k)
    {
    case 1:
        system("cls");
        cout<< "Insira o Nome do Filme da Sala "<< n+1 << " : " ;
        cin.ignore();
        cin.getline(sala[n].filme, 25);
        break;
    case 2:
        system("cls");
        cout<< "\n Deseja resetar a sala "<< n+1 << "? Limpar todos os assentos? (S/N): ";
        cin >> x;
        do
        {
            if(x=='S'|| x=='s')
            {
                reseta(sala, n);
                return;
            }
            else if(x=='n'||x=='N')
            {
                return;
            }
            else
            {
                system("cls");
                cout << " Opçao Invalida!!\n Deseja resetar a sala "<< n+1 << "? Limpar todos os assentos? (S/N): ";
                cin >> x;
            }

        }
        while(x!='S'|| x!='s'|| x!='n'||x!='N');
        break;
    }
}
void mudanca (estrutura sala[], int n, int z, int col, int lin)
{
    int k;

    if(z==1)
    {
        do
        {
            if(sala[n].MlateralD[lin-1][col-1]==0)
            {
                sala[n].MlateralD[lin-1][col-1]=1;
                imprimir1 (sala, n);
                cout << "Deseja alterar outro assento? \n"
                     << "1- Sim\n"
                     << "2- Não\n";
                cin >> k;
                if(k==1)
                {
                    cout <<"Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                    cin >> lin >> col;
                }

            }
            else
            {
                k=1;
                imprimir1 (sala, n);
                cout << " O Assento ja esta ocupado... Escola outro\n"
                     << "Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                cin >> lin >> col;

            }
        }
        while(k==1);

    }
    else if(z==2)
    {
        do
        {
            if(sala[n].Mcentro[lin-1][col-1]==0)
            {
                sala[n].Mcentro[lin-1][col-1]=1;
                imprimir2 (sala, n);
                cout << "Deseja alterar outro assento? \n"
                     << "1- Sim\n"
                     << "2- Não\n";
                cin >> k;
                if(k==1)
                {
                    cout <<"Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                    cin >> lin >> col;
                }

            }
            else
            {
                k=1;
                imprimir2 (sala, n);
                cout << " O Assento ja esta ocupado... Escola outro\n"
                     << "Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                cin >> lin >> col;

            }
        }
        while(k==1);

    }
    else if (z==3)
    {
        do
        {
            if(sala[n].MlateralE[lin-1][col-1]==0)
            {
                sala[n].MlateralE[lin-1][col-1]=1;
                imprimir3 (sala, n);
                cout << "Deseja alterar outro assento? \n"
                     << "1- Sim\n"
                     << "2- Não\n";
                cin >> k;
                if(k==1)
                {
                    cout <<"Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                    cin >> lin >> col;
                }

            }
            else
            {
                k=1;
                imprimir3 (sala, n);
                cout << " O Assento ja esta ocupado... Escola outro\n"
                     << "Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                cin >> lin >> col;

            }
        }
        while(k==1);

    }

}
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int menu, n, cont, z, col, lin, senha=123, xsenha;
    estrutura sala[7];

    do
    {
        menuf();

        do
        {
            cin >> menu;
            if(menu!=1 && menu!=2)
                cout<< " Opção invalida! Digite Novamente... \n";
        }
        while (menu!=1 && menu!=2);
        if (menu==1)
        {
            system("cls");
            filmes (sala);
            cout << "Digite o numero do filme que deseja reservar lugar (Digite 0 para voltar ao menu principal).: ";
            cin >> n;
            if(n!=0)
            {
                system("cls");
                imprimir (sala,n);
                cout << endl << " Digite o local que deseja sentar...\n"
                     << " 1 - Lateral Direita \n"
                     << " 2 - Centro \n"
                     << " 3 - Lateral Esquerda \n"
                     << " Insira a sua opção: (0 para voltar ao menu)";
                cin >> z;

                if(z==1)
                {
                    imprimir1(sala, n);
                    cout<< "Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                    cin>> lin >> col;
                    mudanca(sala,n,z,col,lin);

                }
                else if(z==2)
                {
                    imprimir2(sala, n);
                    cout<< "Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                    cin>> lin >> col;
                    mudanca(sala,n,z,col,lin);
                }
                else if (z==3)
                {
                    imprimir3(sala, n);
                    cout<< "Digite o assento que deseja reserva.. (Primeiro linha, depois coluna).\n";
                    cin>> lin >> col;
                    mudanca(sala,n,z,col,lin);
                }
            }
        }
        if (menu==2)
        {
            do
            {
                cout<< "\n Digite a senha de administrador: ";
                cin >> xsenha;
                if (xsenha == senha)
                {

                    cont=0;
                    do
                    {


                        system("cls");
                        filmes (sala);
                        if(cont==0)
                        {
                            cout << "\n Digite a sala que deseja acessar as configuraçoes (Digite 0 para voltar ao menu principal).: ";
                            cont++;
                        }
                        else cout << " Alteraçao realizada com sucesso!! \n\n Caso queira modificar outra sala, digite a sala que deseja acessar\n as configuraçoes ou digite 0 para voltar ao menu principal.:";
                        cin >> n;
                        if(n!=0)
                        {
                            gerenciar(sala, n);
                        }
                    }
                    while(n!=0);
                }
                else
                {
                    do
                    {
                        system("cls");
                        cout<< "Senha incorreta!! Digite 0 para voltar ao menu ou digite a senha novamente.";
                        cin >> xsenha;
                    }
                    while(xsenha !=senha && xsenha!=0);

                }

                xsenha=n;

            }
            while(xsenha);
        }
    }
    while(menu!=-999);

    return 0;
}
