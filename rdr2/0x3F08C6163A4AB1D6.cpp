// rcm_calderon1.ysc @ L26277
bool func_811()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_551))
  {
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_EAGLEEYESCRATCH_01X"));
    ENTITY::_0x3F08C6163A4AB1D6(iLocal_551);
    ENTITY::CREATE_FORCED_OBJECT(vLocal_447, 5f, joaat("S_EAGLEEYESCRATCH_01X"), true);
    return true;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_551))
  {
    STREAMING::REQUEST_MODEL(joaat("S_EAGLEEYESCRATCH_01X"), false);
    if (STREAMING::HAS_MODEL_LOADED(joaat("S_EAGLEEYESCRATCH_01X")))
    {
      if (iLocal_1013 == 0)
      {
        iLocal_1013 = ENTITY::_0x6F3068258A499E52(joaat("S_EAGLEEYESCRATCH_01X"), vLocal_447, 7);
      }
      else if (ENTITY::_0x1FF441D7954F8709(iLocal_1013))
      {
        iLocal_551 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1013));
      }
    }
  }
  return false;
}