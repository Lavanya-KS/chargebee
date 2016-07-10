
#include <stdio.h>
void toh(int num_of_disk, char fromrod, char torod, char auxrod)
{
    if (num_of_disk == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
    toh(num_of_disk-1, fromrod, auxrod, torod);
    printf("\n Move disk %d from rod %c to rod %c", num_of_disk, fromrod, torod);
    toh(num_of_disk-1, auxrod, torod, fromrod);
}

int main()
{
    int disk = 4; // Number of disks
    toh(disk, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
