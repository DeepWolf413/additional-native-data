// act_caunc_rustling.ysc @ L27116
bool func_669()
{
  if ((func_293(Global_35, iLocal_901, 1, 0) || func_293(Global_35, iLocal_902, 1, 0)) || func_293(Global_35, iLocal_903, 1, 0))
  {
    if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
    {
      return true;
    }
  }
  return false;
}