#include <iostream>

int main()
{
    int N, M, Q;
    short int l1, l2,c1, range;
    std::string dna, proteina;

    std::cin >> N >> M;
    std::cin.ignore();
    getline(std::cin, dna);
    getline(std::cin, proteina);
    std::cin >> Q;
    int qntd[Q];
    for (int j = 0; j < Q; j++)
    {
        std::cin >> l1 >> l2;
        qntd[j]=0;
        c1= 0;
        range = l2-l1+1;
        while (c1 < dna.length())
        {   
            if (proteina.substr(l1 - 1, range) == dna.substr(c1, range))
            {
                qntd[j]++;
            }
            c1++;
        }
    }
    for (int i = 0; i < Q; i++)
    {
        std::cout << qntd[i] << std::endl;
    }
    return 0;
}
