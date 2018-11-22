#include <iostream>
#include <stdlib>

using namespace std;

struct Node
{
    int klucz;
    char ch[10];
    Node *right;
    Node *left;

};

struct Stos
{
    Node *rodzic=nullptr;
    Stos *next=nullptr;
};

/*
Node * inicjalizacja(Node **root)
{
}
*/

void wstawienie(Node **root, int klucz)
{

}

void wstawienie_X_elementow(int X, Node **root)
{
    bool tabl_losowych[21000];
        for(int i=0; i<X; i++)
        {
            //losowanie unikalnej liczby i przes³anie jej do wezla listy
            do
                {
                    los=(rand()%21001);
                }
                while(tabl_losowych[los]);
                tabl_losowych[los]=true;        //zapamietanie wylosowania danej liczb
            //wywolanie funkcji wstawiajacej dla wylosowanego klucza
                wstawia_elem(head, los);
        }

}

Stos * wyszukaj(Node *root, int szukany)
{
    Stos *bingo=nullptr;

    Node *p=root;
    int sukces=0;
    if(!p)
    {
        cout<<"Drzewo nie zawiera zadnych elementow!"<<endl<<endl;
        return bingo;
    }
    while(p!=nullptr)
    {
        if(p->klucz==szukany)
        {
            sukces=1;
            break;
        }
        else
        {
            if(p->klucz<szukany)
                p=p->right;
            else if(p->klucz>szukany)
                p=p->left;
        }
    }
    if(!sukces)
        cout<<"Nie znaleziono wezla o podanym kluczu!"<<endl<<endl;

    return bingo //stos
}


void usuwanie(Node **root)
{

}

void pre_order(Node **root)
{

}

void inorder(Node **root)
{


}

void post_order(Node **root)
{

}






int main()
{
    srand(time(0));
    //wczytanie z pliku************************************************************************8
        int n, klucz1;
        int k1, k2, k3, k4;

        FILE* fp=fopen("lab3.txt", "r");
            if(fp==NULL)
            return -1;
        fscanf(fp, "%d %d %d %d %d", &n, &k1, &k2, &k3, &k4);
        fclose(fp);

    //czas start;*************************************************************************************8
        clock_t begin, end;
        double time_spent;
        begin = clock();

    //zainicjuj „puste” drzewo;

    //usuń element o wartości klucza k1;

    //wstaw element o wartości klucza k1;

    //wstaw X elementów do drzewa;

    //wyświetl wszystkie klucze w trybie inorder;

    //wyświetl wszystkie klucze w trybie preorder;

    //wstaw element o wartości klucza k2;

    //wyświetl wszystkie klucze w trybie inorder;

    //wstaw element o wartości klucza k3;

    //wstaw element o wartości klucza k4;

    //usuń element o wartości klucza k1;

    //wyświetl wszystkie klucze w trybie preorder;

    //wyszukaj element o wartości k1;

    //usuń element o wartości klucza k2;

    //wyświetl wszystkie klucze w trybie inorder;

    //usuń element o wartości klucza k3;

    //usuń element o wartości klucza k4;

    //czas stop;
        end = clock();
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    //wypisz czas wykonania.


        return 0;
}
