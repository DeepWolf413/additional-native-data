// short_update.ysc @ L16709
void func_478()
{
  int iVar0;
  int iVar1;
  int iVar2;

  switch (func_1476(35))
  {
    case 4:
      if (func_1477(35))
      {
      }
      else
      {
        func_1478(35);
        iVar0 = PLAYER::PLAYER_ID();
        iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(iVar0);
        iVar2 = func_892((iVar1 - 1), 0, PLAYER::GET_MAX_WANTED_LEVEL());
        MISC::SET_CHEAT_ACTIVE(4);
        if (iVar2 == 0)
        {
          LAW::_0x29CD4896ECB66C12();
          func_1527();
        }
        func_1475(35, func_1474(35));
        func_1496(35);
      }
  }
}