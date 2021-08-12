// am_mp_yacht.ysc @ L117986
void func_906(int iParam0)
{
  if (VEHICLE::_CAN_ANCHOR_BOAT_HERE_2(iParam0))
  {
    if (!func_937(ENTITY::GET_ENTITY_COORDS(iParam0, true), iLocal_1650, 0))
    {
      VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iParam0, true);
      VEHICLE::SET_BOAT_ANCHOR(iParam0, true);
    }
  }
}