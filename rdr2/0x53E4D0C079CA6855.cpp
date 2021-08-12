// grays3.ysc @ L53954
bool func_1286(int iParam0, int iParam1, int iParam2, float fParam3)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (AICOVERPOINT::_0xC276FE69DDA22BAD(iParam1))
    {
      if (PED::IS_PED_IN_COVER(iParam0, false, false))
      {
        if (AICOVERPOINT::_0x53E4D0C079CA6855(iParam1) == iParam0)
        {
          return true;
        }
      }
      if (iParam2 == 1)
      {
        return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), TASK::GET_SCRIPTED_COVER_POINT_COORDS(iParam1), true) <= fParam3;
      }
    }
  }
  return false;
}