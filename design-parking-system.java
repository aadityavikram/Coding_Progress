// Slow method

class ParkingSystem {
    int big, medium, small;
    public ParkingSystem(int big, int medium, int small) {
        this.big = big;
        this.medium = medium;
        this.small = small;
    }
    
    public boolean addCar(int carType) {
        boolean result;
        switch(carType) {
            case 1:
                result = this.big > 0;
                this.big--;
                break;
            case 2:
                result = this.medium > 0;
                this.medium--;
                break;
            default:
                result = this.small > 0;
                this.small--;
        }
        return result;
    }
}

// Faster method (saw no difference in runtime though)

class ParkingSystem {
    int space[];
    public ParkingSystem(int big, int medium, int small) {
        space = new int[]{big, medium, small};
    }
    
    public boolean addCar(int carType) {
        return space[carType - 1]-- > 0;
    }
}
