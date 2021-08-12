// native_son3.ysc @ L26456
void func_454(int iParam0, bool bParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return;
  }
  VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 1);
  VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(*iParam0, true);
  AITRANSPORT::_0xBA8818212633500A(*iParam0, 0, 0);
  ENTITY::SET_CAN_CLIMB_ON_ENTITY(*iParam0, true);
  VEHICLE::_0x6B53F4B811E583D2(*iParam0, 1);
  VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(*iParam0, 1, 1);
  if (bParam1)
  {
    ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*iParam0, true);
    VEHICLE::_0x9E8711C81AA17876(*iParam0, 1);
    if (VEHICLE::GET_VEHICLE_BODY_HEALTH(*iParam0) > 500f)
    {
      VEHICLE::SET_VEHICLE_BODY_HEALTH(*iParam0, 500f);
    }
  }
}