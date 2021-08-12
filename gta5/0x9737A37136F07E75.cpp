// business_battles.ysc @ L109161
void func_808(bool bParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
  VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
  if (func_810(iVar0) != 1f)
  {
    VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
    VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
    VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, func_810(iVar0));
  }
  if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
  {
    VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
  }
  func_809(iParam1);
  VEHICLE::_0xDBC631F109350B8C(iParam1, true);
  VEHICLE::_0x2311DD7159F00582(iParam1, true);
  VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
  switch (func_3718())
  {
    case 10:
      break;
  }
}