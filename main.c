#include <stdio.h>
#include <stdlib.h>
// m = (p-1)/N+1
// n = (p-1)%N+1

int main()
{
    int level = 5, entrance = 3, apartment = 1;
    int n_level, m_entrance, p_apartment;

    printf("\n\nIn the house %d floors, %d entrances, ", level, entrance);
    printf("on each floor %d apartment.\n", apartment);

    printf("Enter the number of the apartment you are interested in: \n");
    scanf("%d", &p_apartment);

    m_entrance = (p_apartment - 1) / level + 1;

    n_level = (p_apartment - 1) % level + 1;

    printf("Apartment %d is located in "
           "the entrance %d on the floor %d\n", p_apartment, m_entrance, n_level);

    return 0;
}
