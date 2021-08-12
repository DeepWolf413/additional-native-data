// maintransition.ysc @ L99663
void func_565(var uParam0)
{
  char* sVar0;
  char* sVar1;
  char* sVar2;
  int iVar3;
  
  func_538(&(uParam0->f_366), &(uParam0->f_395), 0);
  sVar0 = "HUD_CONNPROB";
  sVar1 = "HUD_MIGRATE_WARN";
  sVar2 = "HUD_SAVETRA_INFO";
  iVar3 = 33816576;
  if (!func_394(0))
  {
    iVar3 = 134217728;
  }
  if (!HUD::IS_SOCIAL_CLUB_ACTIVE())
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, iVar3, sVar2, false, -1, 0, 0, true, 0);
  }
  else if (!MISC::ARE_PROFILE_SETTINGS_VALID())
  {
    func_4373(9);
    func_4332(30);
    func_4340(5);
  }
}