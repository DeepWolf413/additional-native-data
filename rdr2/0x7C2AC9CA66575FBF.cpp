// beat_booby_trap.ysc @ L15114
int func_464()
{
  if (PED::IS_PED_ON_MOUNT(Global_35))
  {
    return 4;
  }
  else if (!TASK::IS_PED_STILL(Global_35))
  {
    if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || PED::GET_PED_STEALTH_MOVEMENT(Global_35))
    {
      return 3;
    }
    else if (TASK::IS_PED_WALKING(Global_35))
    {
      return 2;
    }
    else if (TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35))
    {
      return 1;
    }
  }
  return 0;
}