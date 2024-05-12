// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  bool arr[1000] = {false};
  int first = 0, last = 0, now = 0, opCount = 0;
  bool started = false, checked = false;

 public:
  Train();
  void addCage(bool light);
  int getLength();
  int getOpCount();
};
#endif  // INCLUDE_TRAIN_H_
