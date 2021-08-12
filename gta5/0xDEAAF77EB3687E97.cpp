// ingamehud.ysc @ L115832
int func_1133()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (!Global_1312392[0] && !STATS::STAT_SLOT_IS_LOADED(0))
  {
    if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      iVar0 = STATS::_0xDEAAF77EB3687E97(2, &Global_2465180);
      iVar1 = STATS::_0xDEAAF77EB3687E97(0, &Global_2465302);
      iVar2 = STATS::_0xDEAAF77EB3687E97(1, &Global_2465546);
      iVar3 = STATS::_0xDEAAF77EB3687E97(3, &Global_2465424);
      if (((iVar0 == 2 || iVar1 == 2) || iVar2 == 2) || iVar3 == 2)
      {
        return 1;
      }
    }
  }
  return 0;
}