// bjack_sp.ysc @ L1034
void func_56(var uParam0)
{
  if (!uParam0->f_47)
  {
    uParam0->f_47 = 1;
    func_175(1);
    UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
    UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
    func_176(1);
    if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
    {
      PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
      PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
    }
    if (!Global_1935630.f_12)
    {
      if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
      {
        PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
      }
    }
    func_177(0);
    func_178(0);
    ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
    func_181(func_180(func_179()), 1);
    AUDIO::START_AUDIO_SCENE(func_182(uParam0->f_38));
    Call_Loc(uParam0->f_102);
  }
}