// susan1.ysc @ L56179
bool func_1374(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
  {
    if (bParam0 || (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_227, 0)) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_227, 1))))
    {
      VEHICLE::_0x4C60C333F9CCA2B6(iLocal_227, 1);
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_227, 1, true);
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_227, 2, true);
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_227, 3, true);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_227, true);
      if (!bParam0)
      {
        ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_227, 0), true);
        ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_227, 1), true);
      }
      if ((VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_227, 1) || VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_227, 2)) || VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_227, 3))
      {
        return false;
      }
      else
      {
        return true;
      }
    }
  }
  return false;
}