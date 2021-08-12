// beat_campfire_ambush.ysc @ L4130
void func_148()
{
  func_117(0, "IDLE_BOOL", 1);
  func_118(0, sLocal_530, 1);
  ENTITY::SET_ENTITY_VISIBLE(iLocal_466[0], true);
  if (func_35(iLocal_466[0], 0, 1))
  {
    func_189(&(uLocal_469[0]));
    PED::SET_PED_CONFIG_FLAG(iLocal_466[0], 277, false);
    PED::_0x86F0B6730C32AC14(iLocal_466[0], 1);
    PED::_0xEF371232BC6053E1(iLocal_466[0]);
    AUDIO::TRIGGER_MUSIC_EVENT("RECA_ATTACK");
    if (!func_28(2097152))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_466[0], false);
      func_36(2097152);
    }
  }
  if (func_35(iLocal_466[1], 0, 1))
  {
    PED::_0x86F0B6730C32AC14(iLocal_466[1], 1);
    PED::_0xEF371232BC6053E1(iLocal_466[1]);
  }
  if (func_35(Global_35, 0, 1))
  {
    PED::_0x86F0B6730C32AC14(Global_35, 1);
    PED::_0xEF371232BC6053E1(Global_35);
  }
  func_10(&(Local_20.f_5), 1);
  func_36(262144);
  Local_20.f_44 = 1;
  func_123(&uLocal_351, 0);
}