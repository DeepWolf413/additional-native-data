// rcm_here_kitty_kitty4.ysc @ L21972
bool func_713(var uParam0)
{
  if (ENTITY::IS_ENTITY_DEAD(iLocal_330))
  {
    iLocal_330 = func_584(uParam0, iLocal_259, vLocal_713, 0, 1, 1, 0, 1, 1, 1, 1, 0);
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_330))
    {
      ENTITY::FREEZE_ENTITY_POSITION(iLocal_330, true);
      ENTITY::SET_ENTITY_VISIBLE(iLocal_330, false);
      ENTITY::SET_ENTITY_COLLISION(iLocal_330, false, false);
      AUDIO::_0xEB4D592620B8C209(iLocal_330);
      PED::SET_PED_CAN_BE_TARGETTED(iLocal_330, false);
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_330, false);
      AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_330, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_330, true);
      if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_330))
      {
        PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_330, 0);
      }
      PED::SET_PED_RESET_FLAG(iLocal_330, 170, true);
    }
    return false;
  }
  else
  {
    return true;
  }
  return false;
}