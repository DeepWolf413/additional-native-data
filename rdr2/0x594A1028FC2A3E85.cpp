// beat_taunting.ysc @ L15681
void func_500(int iParam0, int iParam1, int iParam2)
{
  vector3 vVar0;

  if (func_71(iParam0, 0, 1))
  {
    vVar0 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iParam1) };
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iParam0, vVar0, -1, 0, 0, 1, iParam2, iParam1, 0, 0, 0);
  }
}