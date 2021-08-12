// am_mp_casino.ysc @ L352338
bool func_5831(int iParam0)
{
  if (iParam0 < 0 || iParam0 >= 317)
  {
    return 0;
  }
  if (Global_1323703[iParam0 /*142*/].f_66 == 0)
  {
    return 0;
  }
  return VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Global_1323703[iParam0 /*142*/].f_66) > 1;
}