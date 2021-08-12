// act_bankrobbery01.ysc @ L58494
void func_1872(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  switch (iParam0)
  {
    case 0:
    case 6:
      iVar0 = 0;
      break;
    case 3:
      iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
      iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
      break;
    default:
      iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
      iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
      break;
  }
  ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}