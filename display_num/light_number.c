#include "light_number.h"

void light_number (int n) {
	number_t NUM = n;
	
	switch (NUM) {
		case ZERO:
			digitalWrite (AD, LOW);
			digitalWrite (AA, LOW);
			digitalWrite (AI, LOW);
			digitalWrite (BI, LOW);
			digitalWrite (BB, LOW);
			digitalWrite (BD, LOW);
			digitalWrite (M, HIGH);
			break;
		case ONE:
   digitalWrite (AD, HIGH);
			digitalWrite (AA, HIGH);
			digitalWrite (AI, LOW);
			digitalWrite (BI, HIGH);
			digitalWrite (BB, HIGH);
			digitalWrite (BD, LOW);
			digitalWrite (M, HIGH);
   break;
  case TWO:
   digitalWrite (AD, HIGH);
   digitalWrite (AA, LOW);
   digitalWrite (AI, LOW);
   digitalWrite (BI, LOW);
   digitalWrite (BB, LOW);
   digitalWrite (BD, HIGH);
   digitalWrite (M, LOW);
   break;
  case THREE:
   digitalWrite (AI, HIGH);
   digitalWrite (AA, LOW);
   digitalWrite (AD, LOW);
   digitalWrite (BI, HIGH);
   digitalWrite (BB, LOW);
   digitalWrite (BD, LOW);
   digitalWrite (M, LOW);
   break;
  case FOUR:
   digitalWrite (AD, LOW);
   digitalWrite (AA, HIGH);
   digitalWrite (AI, LOW);
   digitalWrite (BI, HIGH);
   digitalWrite (BB, HIGH);
   digitalWrite (BD, LOW);
   digitalWrite (M, LOW);
   break;
  case FIVE:
   digitalWrite (AI, LOW);
   digitalWrite (AA, LOW);
   digitalWrite (AD, HIGH);
   digitalWrite (BI, HIGH);
   digitalWrite (BB, LOW);
   digitalWrite (BD, LOW);
   digitalWrite (M, LOW);
   break;
  case SIX:
   digitalWrite (AI, LOW);
   digitalWrite (AA, LOW);
   digitalWrite (AD, HIGH);
   digitalWrite (BI, LOW);
   digitalWrite (BB, LOW);
   digitalWrite (BD, LOW);
   digitalWrite (M, LOW);
			break;
  case SEVEN:
   digitalWrite (AI, HIGH);
   digitalWrite (AA, LOW);
   digitalWrite (AD, LOW);
   digitalWrite (BI, HIGH);
   digitalWrite (BB, HIGH);
   digitalWrite (BD, LOW);
   digitalWrite (M, HIGH);
   break;
  case EIGHT:
   digitalWrite (AD, LOW);
   digitalWrite (AA, LOW);
   digitalWrite (AI, LOW);
   digitalWrite (BI, LOW);
   digitalWrite (BB, LOW);
   digitalWrite (BD, LOW);
   digitalWrite (M, LOW);
   break;
  case NINE:
   digitalWrite (AD, LOW);
   digitalWrite (AA, LOW);
   digitalWrite (AI, LOW);
   digitalWrite (BI, HIGH);
   digitalWrite (BB, LOW);
   digitalWrite (BD, LOW);
   digitalWrite (M, LOW);
   break;
  default:
   break;
}
