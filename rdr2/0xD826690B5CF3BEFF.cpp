// beat_outlaw_transport.ysc @ L9319
void func_220(int iParam0)
{
  if ((VEHICLE::_IS_DRAFT_VEHICLE(iParam0) || func_432(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    VEHICLE::_0xD826690B5CF3BEFF(iParam0, 0f);
    VEHICLE::_0x850CE59DEC2028F3(iParam0, 0);
    VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iParam0, false);
  }
}