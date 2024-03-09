#include <unordered_map>
#include <variant>

using namespace std;
get_signal(); // sagar implement this
              //
int main() {
  int sensors[] = {
      0,   // 1
      0,   // 2
      0,   // 3
      0,   // 4
      0,   // 5
      0,   // 6
      0,   // 7
      180, // 8
      180, // 9
      0,   // 10
      0,   // 11
      180, // 12
      180, // 13
      0,   // 14
      0,   // 15
  };

  int numSensors = 15;
  unsigned int zone = 0;
  int diag1 = 0;
  int diag2 = 0;
  float got_signal = 0;
  for (int i = 0; i < numSensors; i++) {
    if (sensors[i] != 0) {
      zone += 1 << i;
    }
  }

  switch (zone) {
    case 0b0000000000000011:
         
    case 0b0000000000010011:
    case 0b0000000000010001:
    case 0b0000000100010001:
    case 0b0000000100010011:
    case 0b0000000000110011:
    case 0b0000000000100011:
    case 0b0000000000100010:
    case 0b0000000000110010:
    case 0b0000000100010010:
    case 0b0000000100010000:
    case 0b0000000000100100:
    case 0b0000000000101100:
    case 0b0000000001100100:
    case 0b0000000000001100:
    case 0b0000000001101100:
    case 0b0000001001000100:
    case 0b0000001001001100:
    case 0b0000000001001100:
    case 0b0000001001000000:
    case 0b0000000001001000:
    case 0b0000001001001000:
    case 0b0000100110000000:
    case 0b0000100010000000:
    case 0b0001100010000000:
    case 0b0000000110000000:
    case 0b0001100110000000:
    case 0b0001100000000000:
    case 0b0001000110000000:
    case 0b0001000100000000:
    case 0b0001100100000000:
    case 0b0010011000000000:
    case 0b0010001000000000:
    case 0b0110001000000000:
    case 0b0000011000000000:
    case 0b0110011000000000:
    case 0b0011000000000000:
    case 0b0100011000000000:
    case 0b0010010000000000:
    case 0b0011010000000000:
  };


}
