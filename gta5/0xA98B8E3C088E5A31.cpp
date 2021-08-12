// agency_heist3b.ysc @ L107288
void func_674(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7)
{
  if (*uParam0 != 0)
  {
    TASK::REMOVE_COVER_POINT(*uParam0);
  }
  if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Param1))
  {
    *uParam0 = TASK::ADD_COVER_POINT(Param1, fParam4, iParam5, iParam6, iParam7, false);
  }
}