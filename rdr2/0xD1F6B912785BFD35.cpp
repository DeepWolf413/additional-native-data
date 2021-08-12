// act_fishing01.ysc @ L20227
void func_551(int iParam0, bool bParam1)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
  }
  PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
  if (PED::IS_PED_A_PLAYER(iParam0))
  {
    if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
    {
      PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
    }
    PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
    PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
  }
  PED::_0x9E66708B2B41F14A(iParam0, -1);
  if (PED::IS_PED_A_PLAYER(iParam0))
  {
    PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
  }
  else
  {
    PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
  }
  if (bParam1)
  {
    TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
  }
}