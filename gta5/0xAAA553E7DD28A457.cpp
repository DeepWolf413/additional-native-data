// am_casino_peds.ysc @ L366312
int func_5295(bool bParam0, var uParam1, int iParam2)
{
  bool bVar0;
  int iVar1;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_10))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam1->f_10))
    {
      func_2503(&(uParam1->f_10));
    }
  }
  if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
    bVar0 = true;
  }
  if (func_5296(&(uParam1->f_10), func_5287(bParam0), PED::GET_PED_BONE_COORDS(iParam2, 28422, 0f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
  {
    iVar1 = NETWORK::NET_TO_OBJ(uParam1->f_10);
    NETWORK::SET_NETWORK_ID_CAN_MIGRATE(uParam1->f_10, false);
    ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar1, iParam2, PED::GET_PED_BONE_INDEX(iParam2, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true);
    return 1;
  }
  if (bVar0)
  {
    NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
  }
  return 0;
}