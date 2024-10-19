// function memeber declaration

class cashRegister
{
  public:
  int getCurrentBalance();
  // Function to show the current balance in the register
  //register
  // postcondition: the value of cash on hand is returned

  int acceptAmount(int amountIn);
  // Function to accept the amount
  // from the customer and update the money in the register
  // postcondition: handOnCash + amountIn

  cashRegister(int cashIn = 500);
  //constructor
  // sets the cash on the register to specific amount
  //postcondition: cashOnHand = cashIn

  private:
  int cashOnHand;
  // variable to store the cash in the register


   
};

// function definitions
int cashRegister::getCurrentBalance() const;
{
    return cashOnHand;  

}