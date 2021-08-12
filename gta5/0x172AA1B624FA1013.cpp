// fm_mission_controller.ysc @ L744513
void func_12628(var uParam0, var uParam1, int iParam2)
{
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
  {
    if (!MISC::IS_BIT_SET(bLocal_50565, *iParam2))
    {
      ENTITY::SET_ENTITY_HEALTH(*uParam0, true, 0);
      FIRE::ADD_OWNED_EXPLOSION(iLocal_3286, *uParam1, 58, 8f, true, false, 1f);
      ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
      MISC::SET_BIT(&bLocal_50565, *iParam2);
    }
  }
  else
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*uParam0);
  }
}