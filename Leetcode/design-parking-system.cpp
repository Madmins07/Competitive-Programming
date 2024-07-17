class ParkingSystem
{
public:
    int b, m, s;
    ParkingSystem(int big, int medium, int small)
    {
        b = big;
        m = medium;
        s = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1)
        {
            if (b >= 1)
            {
                b--;
                return true;
            }
            else
                return false;
        }
        if (carType == 2)
        {
            if (m >= 1)
            {
                m--;
                return true;
            }
            else
                return false;
        }
        if (carType == 3)
        {
            if (s >= 1)
            {
                s--;
                return true;
            }
            else
                return false;
        }
        return false;
    }
};
