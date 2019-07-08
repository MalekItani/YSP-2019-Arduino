#ifndef Motor_h_
#define Motor_h_

class Motor{
  public:
    Motor(int, int, int);
    Motor();
    void forward(int);
    void reverse(int);
  private:
    int pinF, pinR, pinP;
};

#endif
