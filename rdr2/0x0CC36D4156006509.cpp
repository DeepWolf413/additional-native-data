// beat_crashed_wagon.ysc @ L2782
void func_58(var uParam0, var uParam1)
{
  int iVar0;
  int iVar1;

  if (*uParam0)
  {
    return;
  }
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam1) || !TASK::_IS_SCENARIO_POINT_ACTIVE(*uParam1))
  {
    return;
  }
  if (func_199(Global_35))
  {
    iVar0 = func_200(Global_35);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
      if (iVar1 == joaat("S_VALERIANROOT01X"))
      {
        *uParam0 = 1;
        func_201(14, 0, 1);
      }
    }
  }
}