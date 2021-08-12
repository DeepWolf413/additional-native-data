// act_cinema.ysc @ L79154
var func_417(int iParam0, bool bParam1)
{
  var uVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while (iVar1 < 32)
  {
    iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
    if (func_36(iVar2, 0, 0))
    {
      if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
      {
        if (bParam1)
        {
          MISC::SET_BIT(&uVar0, iVar1);
        }
        else if (!func_1203(iVar2, 0))
        {
          MISC::SET_BIT(&uVar0, bVar1);
        }
      }
    }
    bVar1++;
  }
  return uVar0;
}