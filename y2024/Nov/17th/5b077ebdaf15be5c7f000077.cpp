std::string countSheep(int number) {
  std::string finalOutput = "";
  for (int i = 1; i < (number + 1); i++) {
    finalOutput += std::to_string(i) + " sheep...";
  }
  return finalOutput;
}

// The last kata for today.
// What the heck is a recursive loop??
// The struggle continues.
// I should probably try Python katas(katae?) tomorrow.
