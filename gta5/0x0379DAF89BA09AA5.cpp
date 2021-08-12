// golf_mp.ysc @ L117310
int func_1555(struct<3> Param0, float fParam3)
{
  int iVar0;
  int iVar1;
  
  if (func_505(Param0, 0f, 0f, 0f, 1056964608, 0))
  {
    return 0;
  }
  func_1556(&iVar1, joaat("prop_golf_ball"), Param0, 1, 1, 0, 1, 0, 0, 0);
  iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(iVar1));
  NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iVar1, false);
  NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar1, true);
  NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(iVar1, true);
  NETWORK::_0x0379DAF89BA09AA5(NETWORK::NET_TO_OBJ(iVar1), 1);
  OBJECT::_0xC6033D32241F6FB5(iVar0, true);
  ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, false);
  ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
  if (bLocal_0)
  {
  }
  return iVar0;
}