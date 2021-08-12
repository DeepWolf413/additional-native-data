// beat_hostage_rescue.ysc @ L6468
bool func_191()
{
  if (ENTITY::_0x0B7CB1300CBFE19C(iLocal_510[0], 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_510[0], 2121492476, true) == 1)
  {
    return false;
  }
  return true;
}