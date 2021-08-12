// fm_deathmatch_creator.ysc @ L215967
void func_1647()
{
  int iVar0;
  bool bVar1;
  
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    Global_1312757[iVar0] = func_565(384, iVar0, -1);
    iVar0++;
  }
  Global_1312763 = func_55(joaat("mpply_last_mp_char"));
  bVar1 = Global_1390376;
  if (bVar1)
  {
    Global_1390376 = 0;
  }
  STATS::PLAYSTATS_AWARD_XP(func_563(640, -1, 1), -1158693853, 654913086);
  func_1648(func_563(640, -1, 1), 654913086, 0);
  Global_1390376 = bVar1;
}