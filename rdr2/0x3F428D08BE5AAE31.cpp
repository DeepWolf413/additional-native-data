// ambush_bnd_cliff1.ysc @ L2982
void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
  switch (iParam1)
  {
    case 0:
      if ((iParam0 % 2) == 0)
      {
        iParam1 = 1;
      }
      else
      {
        iParam1 = 2;
      }
      break;
  }
  switch (iParam1)
  {
    case 1:
      *uParam2 = { -0.31f, 0.03f, -0.22f };
      *uParam3 = { 0f, 50f, 90f };
      break;
    case 2:
      *uParam2 = { 0.31f, 0.03f, -0.22f };
      *uParam3 = { 0f, -50f, 90f };
      break;
  }
  *uParam4 = PED::GET_PED_BONE_INDEX(Local_15.f_40[iParam0], 62111);
}