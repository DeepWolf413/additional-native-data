// gb_biker_burn_assets.ysc @ L3596
void func_80(int iParam0, var uParam1, var uParam2)
{
  int iVar0;
  
  if (!func_847())
  {
    return;
  }
  if (!func_6(2) && !func_845(NETWORK::PARTICIPANT_ID(), 2))
  {
    iVar0 = NETWORK::NET_TO_PED(iParam0);
    if (((func_82(iVar0, 30f, 1) || (PED::IS_PED_BEING_JACKED(iVar0) && PED::GET_PEDS_JACKER(iVar0) == PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar0, true), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iVar0, true), joaat("weapon_molotov"), 5f, true))
    {
      func_81(2);
    }
  }
}