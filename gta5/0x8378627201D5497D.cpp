// chinese1.ysc @ L110431
void func_699(int iParam0, int iParam1, float fParam2, float fParam3)
{
  if (func_700(iParam0))
  {
    WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iParam0, fParam2, fParam3);
    PED::SET_PED_ACCURACY(iParam0, iParam1);
  }
}