// player_scene_t_insult.ysc @ L7452
void func_58()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < iLocal_243)
  {
    if (iLocal_243[iVar0] != 0)
    {
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
    }
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < iLocal_256)
  {
    if (iLocal_256[iVar0] != 0)
    {
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_256[iVar0]);
    }
    iVar0++;
  }
  STREAMING::REMOVE_ANIM_DICT(&Local_345);
  if (PED::DOES_GROUP_EXIST(iLocal_252))
  {
    PED::REMOVE_GROUP(iLocal_252);
  }
  MISC::SET_GAME_PAUSED(false);
  SCRIPT::TERMINATE_THIS_THREAD();
}