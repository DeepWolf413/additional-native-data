// armadillo.ysc @ L6851
bool func_220()
{
  int iVar0;
  int iVar1;

  if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
  {
    iVar0 = joaat("WORLD_HUMAN_BARCUSTOMER");
    iVar1 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
    if (iVar1 == iVar0)
    {
      return true;
    }
  }
  return false;
}