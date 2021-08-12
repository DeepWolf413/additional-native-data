// abigail2_1.ysc @ L24455
void func_407(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    return;
  }
  if (func_839(uParam0, iParam1, sParam2))
  {
    if (!PED::IS_PED_INJURED(iParam1))
    {
      if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
      {
        PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
      }
    }
  }
}