// ambush_bnd_cliff1.ysc @ L3147
void func_124(int iParam0, int iParam1)
{
  float fVar0;
  int iVar1;

  if (!func_61(iParam1, 0, 0))
  {
    return;
  }
  switch (iParam0)
  {
    case 0:
      PED::SET_PED_ACCURACY(iParam1, 20);
      fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 1);
      fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f));
      PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
      iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 110);
      PED::SET_PED_SHOOT_RATE(iParam1, iVar1);
      fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 3);
      fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.25f));
      PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
      break;
    case 1:
      PED::SET_PED_ACCURACY(iParam1, 15);
      PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, false);
      break;
  }
}