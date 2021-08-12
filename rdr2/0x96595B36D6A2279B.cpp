// mob4.ysc @ L58733
void func_1518(int* iParam0, bool bParam1)
{
  FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 19, bParam1);
  FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 8, !bParam1);
  FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 18, bParam1);
  PED::_0x96595B36D6A2279B(*iParam0, bParam1);
  iParam0->f_15 = bParam1;
}