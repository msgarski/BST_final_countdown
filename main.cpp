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

void wstawienie(Node **root)
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

void wyszukaj(Node *root)
{

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
    //czas start;*************************************************************************************8
clock_t begin, end;
    double time_spent;
    begin = clock();




    //czas stop;
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;


    return 0;
}
