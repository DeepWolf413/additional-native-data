// feud1.ysc @ L62530
void func_1354(bool bParam0, int iParam1, float fParam2)
{
  if (!PED::IS_PED_INJURED(bParam0))
  {
    func_1881(bParam0, 0);
    PED::_0xAE6004120C18DF97(bParam0, 0, 0);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(bParam0, 1);
    PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
    ENTITY::SET_ENTITY_PROOFS(bParam0, 24, false);
    PED::SET_PED_CONFIG_FLAG(bParam0, 87, true);
    PED::SET_PED_CONFIG_FLAG(bParam0, 169, true);
    ENTITY::SET_ENTITY_LOD_DIST(bParam0, iParam1);
    PED::SET_PED_LOD_MULTIPLIER(bParam0, fParam2);
  }
}