//get the amuont of food eaten by each monkey, each day

void getFoodEaten(double food[][NUM_DAYS]){
  for(int monkey = 0; monkey < NUM_MONKEYS; monkey++){
    for(int day = 0; day < NUM_DAYS; day++){
      //get the amount eaten by this mokey on this day
      cout << "How much food did Monkey " << monkey << " eat on Day " << day << ": " << endl;
      cin >> food[monkey][days];

      //validate the input
    }
  }
}