// am_mp_arena_garage.ysc @ L290104
int func_4679()
{
  bool bVar0;
  var uVar1;
  int iVar4;
  
  bVar0 = func_4502(PLAYER::PLAYER_ID());
  if (func_239(0, bVar0, -1, 0))
  {
    func_4718();
    if (bVar0)
    {
      HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_PLYLOAD");
      HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
      func_4680(&(Global_2453009.f_780), 0, 0, 0f, 0f, 0f, &uVar1, 0f, 0f, 0f, 1, 0, &uVar1, &iVar4, iVar4, 0, 0, 0, 1, 0, 0, 0, 0);
      HUD::DISPLAY_RADAR(false);
    }
    return 1;
  }
  return 0;
}