// ambush_bnd_cliff1.ysc @ L3213
void func_128(var uParam0, int iParam1)
{
  if (!func_61((*uParam0)[iParam1], 0, 0))
  {
    return;
  }
  switch (iParam1)
  {
    case 2:
    case 3:
    case 4:
      PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 2);
      break;
    default:
      PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 1);
      break;
  }
  PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iParam1], 2);
  PED::SET_PED_ACCURACY((*uParam0)[iParam1], 1);
}