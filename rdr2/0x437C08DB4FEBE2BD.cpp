// abigail2_1.ysc @ L25278
void func_426(int iParam0, float fParam1, int iParam2)
{
  int iVar0;
  char* sVar1;

  if (func_20() != -1)
  {
    return;
  }
  if (!func_593(15))
  {
    return;
  }
  Global_40.f_11095[iParam0] = fParam1;
  iVar0 = func_918(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
  ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_919(iParam0), iVar0);
  func_921(func_920(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
  if (((fParam1 <= func_922(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
  {
    func_317(84, 1);
  }
  if (fParam1 <= -99.999f)
  {
    func_317(func_923(iParam0), 1);
  }
  sVar1 = func_924(iParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
  {
    PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
  }
}