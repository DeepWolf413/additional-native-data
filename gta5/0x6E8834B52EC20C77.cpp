// pb_prostitute.ysc @ L4055
void func_99(var uParam0)
{
  if (!func_549())
  {
    if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_101(1), 3))
    {
      return;
    }
  }
  if (func_489(iLocal_49, 16))
  {
    if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
    {
      PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
      func_5(&iLocal_49, 16);
    }
  }
  if (func_489(iLocal_49, 2))
  {
    func_100(1);
    func_490("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
  }
  func_540();
  if (func_549())
  {
    func_534(uParam0);
  }
}