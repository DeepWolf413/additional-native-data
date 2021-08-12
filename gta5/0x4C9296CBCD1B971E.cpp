// gb_biker_free_prisoner.ysc @ L357825
void func_6162()
{
  if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
  {
    PLAYER::SET_MAX_WANTED_LEVEL(5);
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  }
  func_6206("FP_HIJACK_TEXT");
  if (func_6205() && iLocal_200 == 2)
  {
    AUDIO::TRIGGER_MUSIC_EVENT("BKR_FREE_PRIS_FAIL");
  }
  if (MISC::GET_FAKE_WANTED_LEVEL() > 0)
  {
    MISC::SET_FAKE_WANTED_LEVEL(0);
  }
  if (iLocal_195)
  {
    if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) != iLocal_196)
    {
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_196);
    }
  }
  func_6204();
  func_872(0);
  func_379();
  func_6202(Global_1681722, -1, -1, -1, -1);
  func_6163(1, 0);
  func_381();
  func_5580();
  SCRIPT::TERMINATE_THIS_THREAD();
}