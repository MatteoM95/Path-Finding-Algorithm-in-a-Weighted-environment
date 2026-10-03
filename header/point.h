#pragma once

class Point {
    public:
        
        Point();
        Point(float weight, int x_, int y_);
        int getX();
        int getY();
        int getWeight();

        void setX(int x);
        void setY(int y);
        void setWeight(float weight);

        void printPointInfo();

    private:
        float weight;
        int x;
        int y;
};
