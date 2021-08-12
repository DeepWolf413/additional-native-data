// am_pass_the_parcel.ysc @ L10039
void func_256()
{
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_104.f_16))
  {
    if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_104.f_16), false))
    {
      if ((10000 - func_8(&(Local_104.f_9), 0, 0)) >= 0)
      {
        if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_104.f_16), 50f, 50f, 50f, false, true, 0))
        {
          func_258((Global_262145.f_10369 - func_8(&(Local_104.f_9), 0, 0)), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
          func_257();
        }
      }
      else
      {
        if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_104.f_16), 50f, 50f, 50f, false, true, 0))
        {
          func_258(0, "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
          func_257();
        }
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_104.f_16))
        {
          NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_104.f_16), true, false, -1);
        }
      }
    }
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_90))
  {
    HUD::REMOVE_BLIP(&iLocal_90);
  }
}