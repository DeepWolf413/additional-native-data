// fm_bj_race_controler.ysc @ L565537
void func_9620(var uParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 9)
  {
    if (MISC::IS_BIT_SET(uParam0->f_761, iVar0))
    {
      MISC::DELETE_STUNT_JUMP(uParam0->f_762[bVar0]);
      MISC::CLEAR_BIT(&(uParam0->f_761), bVar0);
    }
    Global_4456448.f_84323[bVar0 /*9*/] = { 0f, 0f, 0f };
    Global_4456448.f_84323[bVar0 /*9*/].f_3 = { 0f, 0f, 0f };
    Global_4456448.f_84323[bVar0 /*9*/].f_6 = { 0f, 0f, 0f };
    bVar0++;
  }
  MISC::DISABLE_STUNT_JUMP_SET(2);
}