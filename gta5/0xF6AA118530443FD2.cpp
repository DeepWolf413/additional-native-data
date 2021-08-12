// fm_mission_controller.ysc @ L809368
int func_13658(int iParam0, bool bParam1)
{
  if (func_13590(bParam1, 1))
  {
    return 0;
  }
  if ((PED::IS_PED_IN_COMBAT(iParam0, 0) || PED::IS_PED_FLEEING(iParam0)) || (PED::GET_PED_ALERTNESS(iParam0) != 0 && PED::GET_PED_ALERTNESS(iParam0) != -1))
  {
    switch (func_13219(bParam1))
    {
      case 0:
      case 2:
        return 1;
      
      case 1:
        if (func_13243(bParam1, 0))
        {
          return 1;
        }
        break;
      }
  }
  return 0;
}