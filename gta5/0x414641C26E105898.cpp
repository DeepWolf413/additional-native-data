// fm_mission_controller.ysc @ L808380
int func_13640(int iParam0)
{
  var uVar0;
  
  if (TASK::IS_PED_IN_WRITHE(iParam0) || PED::IS_PED_EVASIVE_DIVING(iParam0, &uVar0))
  {
    return 0;
  }
  return 1;
}