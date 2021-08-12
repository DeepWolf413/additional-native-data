// campfire_gang.ysc @ L5013
void func_140(var uParam0)
{
  char* sVar0;

  sVar0 = "AZ_enemy_campfire";
  AUDIO::_0x3743CE6948194349(sVar0, uParam0->f_131, 0f);
  AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, true, true);
}