#include <iostream>
#include <vector>
#include <random>
using namespace std;
int main()
{

    int tempPassenger = 0;
    int tempSimulations = 0;
    int SuccessCount = 0;
    cin >> tempPassenger >> tempSimulations;
    const int PassengerNumber = tempPassenger;
    const int simulations = tempSimulations;
    random_device seed;
    mt19937 gen(seed());

    for (int sim = 0; sim < simulations; ++sim)
    {

        vector<bool> SeatOccupied(PassengerNumber + 1, false);

        uniform_int_distribution<int> DistFirst(1, PassengerNumber);
        int FirstChoice = DistFirst(gen);
        SeatOccupied[FirstChoice] = true;

        for (int i = 2; i < PassengerNumber; ++i)
        {
            if (SeatOccupied[i] == false)
            {

                SeatOccupied[i] = true;
            }
            else
            {

                vector<int> EmptySeats;
                for (int j = 1; j <= PassengerNumber; ++j)
                {
                    if (SeatOccupied[j] == false)
                    {
                        EmptySeats.push_back(j);
                    }
                }

                uniform_int_distribution<int> DistEmpty(0, EmptySeats.size() - 1);
                int pick = EmptySeats[DistEmpty(gen)];
                SeatOccupied[pick] = true;
            }
        }

        if (SeatOccupied[PassengerNumber] == false)
        {
            SuccessCount++;
        }
    }

    cout << "模拟次数: " << simulations << endl;
    cout << "第 " << PassengerNumber << " 个人坐在自己位置上的概率: "
         << (double)SuccessCount / simulations * 100 << "%" << endl;

    return 0;
}