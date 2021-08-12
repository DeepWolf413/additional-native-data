// main.ysc @ L3267
void func_76()
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  while (iVar0 < 60)
  {
    if (Global_40.f_4283.f_6[iVar0 /*5*/] == joaat("CSTAG_MOOD_ARTHUR_COLTER") || Global_40.f_4283.f_6[iVar0 /*5*/] == joaat("CSTAG_MOOD_ARTHUR_BEAVER"))
    {
      return;
    }
    iVar0++;
  }
  iVar1 = func_259();
  switch (iVar1)
  {
    case 0:
      func_260(joaat("CSTAG_MOOD_ARTHUR_COLTER"), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 0, 1);
      PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 5);
      break;
    case 4:
    case 5:
    case 6:
      func_260(joaat("CSTAG_MOOD_ARTHUR_BEAVER"), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 0, 1);
      PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 6);
      break;
    default:
      break;
  }
}